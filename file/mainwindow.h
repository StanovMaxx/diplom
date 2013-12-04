#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H

class Notepad : public QMainWindow
{
    Q_OBJECT;

public:
    Notepad();

private slots:
    void open();
    void save();


private:
    QTextEdit *textEdit;
    QAction *saveAction;
    QAction *openAction;
    QAction *exitAction;

    QMenu *fileMenu;
};
