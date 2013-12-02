#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void sum();
    void len();
    void zam();
    void z();
    void z1();
    void start();


private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
