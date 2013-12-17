#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <QtCore/QTextCodec>
#include <cstdlib>
#include <iostream>
#include <string.h>

#define MAX 16000
QString fileName;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle(tr("My Progaramm"));
    QObject::connect(ui->openfile, SIGNAL(clicked()), this, SLOT(open()));
    QObject::connect(ui->table, SIGNAL(clicked()), this, SLOT(colum1()));
    QObject::connect(ui->grafbutton, SIGNAL(clicked()), this, SLOT(graf()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::open()
{
     fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
        tr("All Files (*.*);;DPT (*dpt);;Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (fileName != "") {
         QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }

        ui->filename->setText(fileName);
        QTextStream in(&file);
        ui->textshow->setText(in.readAll());
        file.close();

    }
}

void MainWindow::colum1(){
  QString text,a1,a2,a3;
  QStringList text2,text1;



  if (fileName != "") {
       QFile file(fileName);
      if (!file.open(QIODevice::ReadOnly)) {
          QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
          return;
      }

      QTextStream in(&file);
      while(!in.atEnd()){
      text=in.readLine();
      text2=text.split(":");
      //if(text2[0]=="yi_min") break;
      a1+=(text2[1].replace("y",""))+" \t  "+"|"+"\t"+text2[2]+"\n";

      }
      ui->col1->setText(a1);
      file.close();

  }
}

  void MainWindow::interpol(){

         QString ReRe;
         QString ResFile;
         QString OurDir="/qt/mynew/out_";
         QString OurDate = (QDateTime::currentDateTime().toString("dd-MM-yyyy-hh-mm-ss"));
         QString format=".dpt";
         ReRe=ResFile;


         ResFile.append(OurDir);
         ResFile.append(OurDate);
         ResFile.append(format);

         QFile OutFile(ResFile);
         OutFile.open(QIODevice::ReadWrite);
         QTextStream out(&OutFile);

          QString myfile = fileName;
          QString qString1 = myfile;
          QByteArray byteArray =qString1.toUtf8();
          const char* cString =byteArray.constData();

          int size=0;
          double x[MAX], y[MAX], xi, yi, yii, old_yi, next_yi, yi_min, xi_min;
                     FILE *f;
                     if((f=fopen(cString, "r"))==NULL){
                         printf("file is not found!\n");
                         exit(1);
                     }
                     while((fscanf(f,"%lf,%lf",&x[size],&y[size]))!=EOF && size < MAX){

                         size++;
                     }

                     {
                         gsl_interp_accel *acc = gsl_interp_accel_alloc ();
                         gsl_spline *spline = gsl_spline_alloc (gsl_interp_akima, size);
                         gsl_spline_init (spline, x, y, size);

                         xi_min = x[0];
                         yi_min = gsl_spline_eval(spline, xi_min, acc);

                         for (xi = x[0]; xi <= x[size - 1]; xi += 0.1){
                             if(xi == x[0]){
                              yi = gsl_spline_eval(spline, xi, acc);
                             }
                             else{
                                 yi = next_yi;
                             }

                             if (yi < yi_min){
                               yi_min = yi;
                               xi_min = xi;
                             }

                             //Нахождение второй производной
                             if(xi != x[0] && xi + 0.1 <= x[size - 2]){
                                 next_yi = gsl_spline_eval(spline, xi += 0.1, acc);
                                 yii = (next_yi - 2 * yi + old_yi) / 0.01;


                                 out << "xi:\t" << xi << "yi:\t" << yi << "\n";

                             }
                             old_yi = yi;
                         }
                         out << "yi_min:\t" << yi_min;
                         gsl_spline_free(spline);
                         gsl_interp_accel_free(acc);
                     }
          OutFile.close();

          QFile File(ResFile);
          File.open(QIODevice::ReadOnly);
          QTextStream in(&File);
          QString line = in.readAll();
          File.close();

  }

  double f ( double x , void * params ) {
  return log ( x ) / pow ( x , 1.0 / 3.0) ;
  }

//void MainWindow::integral(){
//    gsl_function F={&f,0};
//    double a=0, b=1;
//    double abserr =0.0, reller =1e-3;
//    int max_intervals =10;
//    gsl_integration_cquad_workspace *w=gsl_integration_cquad_workspace_alloc(max_intervals);
//    double result, error;
//    gsl_integration_qags(&F, a, b, abserr, reller, max_intervals, w, &result, &error);
//    gsl_integration_cquad_workspace_free(w);
//}

void MainWindow::graf(){
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    QPen pen(Qt::red);




    scene->addLine( -180,250,250,250,pen);
    scene->addLine(250,250,245,245,pen);
    scene->addLine(250,250,245,255,pen);
    scene->addLine(250,230,245,240,pen);
    scene->addLine(245,230,247.5,236,pen);
    scene->addLine(-180,250,-180,0,pen);
    scene->addLine(-180,0,-185,5,pen);
    scene->addLine(-180,0,-175,5,pen);
    scene->addLine(-172,2,-168,10,pen);
    scene->addLine(-168,3,-172,10,pen);


    ui->graphicsView->setScene(scene);
}
