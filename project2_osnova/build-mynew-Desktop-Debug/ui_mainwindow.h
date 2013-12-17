/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openfile;
    QLabel *label;
    QTextBrowser *textshow;
    QPushButton *table;
    QTextBrowser *col1;
    QLabel *filename;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *grafbutton;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1266, 590);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(123);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openfile = new QPushButton(centralWidget);
        openfile->setObjectName(QStringLiteral("openfile"));
        openfile->setGeometry(QRect(10, 10, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 67, 17));
        textshow = new QTextBrowser(centralWidget);
        textshow->setObjectName(QStringLiteral("textshow"));
        textshow->setEnabled(true);
        textshow->setGeometry(QRect(20, 140, 361, 331));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(31);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textshow->sizePolicy().hasHeightForWidth());
        textshow->setSizePolicy(sizePolicy1);
        table = new QPushButton(centralWidget);
        table->setObjectName(QStringLiteral("table"));
        table->setGeometry(QRect(110, 10, 99, 27));
        col1 = new QTextBrowser(centralWidget);
        col1->setObjectName(QStringLiteral("col1"));
        col1->setGeometry(QRect(420, 140, 291, 331));
        col1->setLayoutDirection(Qt::LeftToRight);
        col1->setFrameShape(QFrame::Box);
        col1->setFrameShadow(QFrame::Plain);
        col1->setMidLineWidth(1);
        col1->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        col1->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        col1->setLineWrapMode(QTextEdit::NoWrap);
        col1->setLineWrapColumnOrWidth(2);
        col1->setOverwriteMode(false);
        col1->setCursorWidth(2);
        filename = new QLabel(centralWidget);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setEnabled(false);
        filename->setGeometry(QRect(20, 90, 611, 21));
        filename->setLayoutDirection(Qt::LeftToRight);
        filename->setInputMethodHints(Qt::ImhNone);
        filename->setFrameShape(QFrame::Box);
        filename->setIndent(3);
        filename->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextEditable|Qt::TextEditorInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 840, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 10, 99, 27));
        grafbutton = new QPushButton(centralWidget);
        grafbutton->setObjectName(QStringLiteral("grafbutton"));
        grafbutton->setGeometry(QRect(310, 10, 99, 27));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(730, 140, 451, 331));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1266, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), col1, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), textshow, SLOT(clear()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), filename, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        openfile->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 ", 0));
        label->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273:", 0));
        table->setText(QApplication::translate("MainWindow", "\320\222 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
        filename->setText(QApplication::translate("MainWindow", "\320\277\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203 : ", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", 0));
        grafbutton->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
