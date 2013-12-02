#include "widget.h"
#include "ui_widget.h"
#include "stdlib.h"
#include "string.h"
int m=0;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(sum()));
    QObject::connect(ui->pushButton1, SIGNAL(clicked()), this, SLOT(len()));
    QObject::connect(ui->pushButton3, SIGNAL(clicked()), this, SLOT(zam()));
    QObject::connect(ui->p, SIGNAL(clicked()), this, SLOT(z()));
    QObject::connect(ui->p1, SIGNAL(clicked()), this, SLOT(z1()));
    QObject::connect(ui->p2, SIGNAL(clicked()), this, SLOT(start()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::sum()
{
    QString str;
    str=ui->lineEdit->text()+ui->lineEdit_2->text();
    ui->Label->setText(str);

}

void Widget::z1(){
    m=0;
    ui->progressBar->setValue(m);
}

void Widget::z(){
    int i;

    for(i=0;i<200;i++){
        m+=1;
    ui->progressBar->setValue(m);
    sleep(0.01);
    }
}

void Widget::len()
{
    QString str,str1,rez;
    int i,j;
    bool q=false;
    str=ui->lineEdit->text();
    str1=ui->lineEdit_2->text();
    for(j=0;str[j]!='\0';j++){
        for(i=0;str1[i]!='\0';i++){
            if(str[j]==str1[i]) q=true;
        }
        if(!q) rez+=str[j   ];
        q=false;
    }
    if(rez=="") rez="#######";
    ui->Label1->setText(rez);

}

void Widget::zam()
{
    QString str,s,c;
    int i;
    str=ui->lineEdit->text()+ui->lineEdit_2->text();
    s=ui->lineEdit_3->text();
    c=ui->lineEdit_4->text();
    for(i=0;str[i]!='\0';i++){
        if(str[i]==s[0]) str[i]=c[0];
    }
     ui->Label2->setText(str);

}

void Widget::start(){
    int n;
    for(n=0;n<10000;n++){
      //  ui->lcdNumber->setDecMode(n);
    }
}


