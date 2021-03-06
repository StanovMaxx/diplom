#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVBoxLayout>
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>
#include <QMainWindow>
#include <QString>
#include <QWizard>
#include <QPushButton>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QTextEdit>
#include <gsl/gsl_errno.h>
#include <gsl/gsl_spline.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_deriv.h>
#include <gsl/gsl_integration.h>
#include <gsl/gsl_math.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTableWidget>
#include <QObject>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void open();
    void colum1();
    void interpol();
  //  void integral();
    void graf();

signals:
    void MySignal();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
