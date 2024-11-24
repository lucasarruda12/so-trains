/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *trem1;
    QLabel *trilho1;
    QLabel *trem2;
    QLabel *trilho2;
    QLabel *trilho5;
    QLabel *trilho4;
    QLabel *trilho3;
    QLabel *trem3;
    QLabel *trem4;
    QLabel *trem5;
    QScrollBar *trem1_scroll;
    QLabel *background;
    QLabel *barbar1;
    QLabel *background_2;
    QScrollBar *trem2_scroll;
    QLabel *barbar1_2;
    QScrollBar *trem3_scroll;
    QLabel *barbar1_3;
    QScrollBar *trem4_scroll;
    QLabel *barbar1_4;
    QLabel *barbar1_5;
    QScrollBar *trem5_scroll;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(911, 526);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        trem1 = new QLabel(centralWidget);
        trem1->setObjectName(QString::fromUtf8("trem1"));
        trem1->setGeometry(QRect(144, 54, 20, 20));
        trem1->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: purple;\n"
"	border: 4px solid darkpurple;\n"
"}"));
        trilho1 = new QLabel(centralWidget);
        trilho1->setObjectName(QString::fromUtf8("trilho1"));
        trilho1->setGeometry(QRect(146, 54, 200, 200));
        trilho1->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: transparent;\n"
"	border: 4px solid dodgerblue;\n"
"}"));
        trem2 = new QLabel(centralWidget);
        trem2->setObjectName(QString::fromUtf8("trem2"));
        trem2->setGeometry(QRect(340, 54, 20, 20));
        trem2->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: orange;\n"
"	border: 4px solid darkorange;\n"
"}"));
        trilho2 = new QLabel(centralWidget);
        trilho2->setObjectName(QString::fromUtf8("trilho2"));
        trilho2->setGeometry(QRect(342, 54, 200, 200));
        trilho2->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: transparent;\n"
"	border: 4px solid dodgerblue;\n"
"}"));
        trilho5 = new QLabel(centralWidget);
        trilho5->setObjectName(QString::fromUtf8("trilho5"));
        trilho5->setGeometry(QRect(450, 250, 200, 200));
        trilho5->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: transparent;\n"
"	border: 4px solid dodgerblue;\n"
"}"));
        trilho4 = new QLabel(centralWidget);
        trilho4->setObjectName(QString::fromUtf8("trilho4"));
        trilho4->setGeometry(QRect(254, 250, 200, 200));
        trilho4->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: transparent;\n"
"	border: 4px solid dodgerblue;\n"
"}"));
        trilho3 = new QLabel(centralWidget);
        trilho3->setObjectName(QString::fromUtf8("trilho3"));
        trilho3->setGeometry(QRect(58, 250, 200, 200));
        trilho3->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: transparent;\n"
"	border: 4px solid dodgerblue;\n"
"}"));
        trem3 = new QLabel(centralWidget);
        trem3->setObjectName(QString::fromUtf8("trem3"));
        trem3->setGeometry(QRect(58, 250, 20, 20));
        trem3->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: blue;\n"
"	border: 4px solid darkblue;\n"
"}"));
        trem4 = new QLabel(centralWidget);
        trem4->setObjectName(QString::fromUtf8("trem4"));
        trem4->setGeometry(QRect(254, 250, 20, 20));
        trem4->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: red;\n"
"	border: 4px solid darkred;\n"
"}"));
        trem5 = new QLabel(centralWidget);
        trem5->setObjectName(QString::fromUtf8("trem5"));
        trem5->setGeometry(QRect(450, 250, 20, 20));
        trem5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background: green;\n"
"	border: 4px solid darkgreen;\n"
"}"));
        trem1_scroll = new QScrollBar(centralWidget);
        trem1_scroll->setObjectName(QString::fromUtf8("trem1_scroll"));
        trem1_scroll->setGeometry(QRect(705, 260, 160, 24));
        trem1_scroll->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: purple;\n"
"	border: 4px solid darkpurple;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 0px;\n"
"}"));
        trem1_scroll->setMaximum(50);
        trem1_scroll->setPageStep(5);
        trem1_scroll->setValue(25);
        trem1_scroll->setSliderPosition(25);
        trem1_scroll->setOrientation(Qt::Horizontal);
        background = new QLabel(centralWidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(34, 20, 641, 451));
        background->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: white;\n"
"	border: 4px solid grey;\n"
"}"));
        barbar1 = new QLabel(centralWidget);
        barbar1->setObjectName(QString::fromUtf8("barbar1"));
        barbar1->setGeometry(QRect(705, 268, 160, 10));
        barbar1->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: dodgerblue;\n"
"}"));
        background_2 = new QLabel(centralWidget);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(690, 230, 191, 241));
        background_2->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: white;\n"
"	border: 4px solid darkgrey;\n"
"}"));
        trem2_scroll = new QScrollBar(centralWidget);
        trem2_scroll->setObjectName(QString::fromUtf8("trem2_scroll"));
        trem2_scroll->setGeometry(QRect(705, 300, 160, 24));
        trem2_scroll->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: orange;\n"
"	border: 4px solid darkorange;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 0px;\n"
"}"));
        trem2_scroll->setMaximum(50);
        trem2_scroll->setPageStep(5);
        trem2_scroll->setSliderPosition(25);
        trem2_scroll->setOrientation(Qt::Horizontal);
        barbar1_2 = new QLabel(centralWidget);
        barbar1_2->setObjectName(QString::fromUtf8("barbar1_2"));
        barbar1_2->setGeometry(QRect(705, 308, 160, 10));
        barbar1_2->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: dodgerblue;\n"
"}"));
        trem3_scroll = new QScrollBar(centralWidget);
        trem3_scroll->setObjectName(QString::fromUtf8("trem3_scroll"));
        trem3_scroll->setGeometry(QRect(705, 340, 160, 24));
        trem3_scroll->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: blue;\n"
"	border: 4px solid darkblue;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 0px;\n"
"}"));
        trem3_scroll->setMaximum(50);
        trem3_scroll->setPageStep(5);
        trem3_scroll->setSliderPosition(25);
        trem3_scroll->setOrientation(Qt::Horizontal);
        barbar1_3 = new QLabel(centralWidget);
        barbar1_3->setObjectName(QString::fromUtf8("barbar1_3"));
        barbar1_3->setGeometry(QRect(705, 348, 160, 10));
        barbar1_3->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: dodgerblue;\n"
"}"));
        trem4_scroll = new QScrollBar(centralWidget);
        trem4_scroll->setObjectName(QString::fromUtf8("trem4_scroll"));
        trem4_scroll->setGeometry(QRect(705, 382, 160, 24));
        trem4_scroll->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: red;\n"
"	border: 4px solid darkred;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 0px;\n"
"}"));
        trem4_scroll->setMaximum(50);
        trem4_scroll->setPageStep(5);
        trem4_scroll->setSliderPosition(25);
        trem4_scroll->setOrientation(Qt::Horizontal);
        barbar1_4 = new QLabel(centralWidget);
        barbar1_4->setObjectName(QString::fromUtf8("barbar1_4"));
        barbar1_4->setGeometry(QRect(705, 390, 160, 10));
        barbar1_4->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: dodgerblue;\n"
"}"));
        barbar1_5 = new QLabel(centralWidget);
        barbar1_5->setObjectName(QString::fromUtf8("barbar1_5"));
        barbar1_5->setGeometry(QRect(705, 428, 160, 10));
        barbar1_5->setStyleSheet(QString::fromUtf8("QLabel { \n"
"	background: dodgerblue;\n"
"}"));
        trem5_scroll = new QScrollBar(centralWidget);
        trem5_scroll->setObjectName(QString::fromUtf8("trem5_scroll"));
        trem5_scroll->setGeometry(QRect(705, 420, 160, 24));
        trem5_scroll->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background: transparent;\n"
"    min-height: 20px;\n"
"}\n"
"QScrollBar::handle:horizontal {\n"
"    background: green;\n"
"	border: 4px solid darkgreen;\n"
"    min-width: 20px;\n"
"}\n"
"QScrollBar::add-line:horizontal {\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    width: 0px;\n"
"}"));
        trem5_scroll->setMaximum(50);
        trem5_scroll->setPageStep(5);
        trem5_scroll->setValue(25);
        trem5_scroll->setSliderPosition(25);
        trem5_scroll->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        background_2->raise();
        barbar1_3->raise();
        barbar1_4->raise();
        barbar1_2->raise();
        barbar1->raise();
        trem1_scroll->raise();
        background->raise();
        trilho5->raise();
        trilho4->raise();
        trilho3->raise();
        trilho2->raise();
        trilho1->raise();
        trem1->raise();
        trem2->raise();
        trem3->raise();
        trem4->raise();
        trem5->raise();
        trem2_scroll->raise();
        trem3_scroll->raise();
        trem4_scroll->raise();
        barbar1_5->raise();
        trem5_scroll->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        trem1->setText(QString());
        trilho1->setText(QString());
        trem2->setText(QString());
        trilho2->setText(QString());
        trilho5->setText(QString());
        trilho4->setText(QString());
        trilho3->setText(QString());
        trem3->setText(QString());
        trem4->setText(QString());
        trem5->setText(QString());
        background->setText(QString());
        barbar1->setText(QString());
        background_2->setText(QString());
        barbar1_2->setText(QString());
        barbar1_3->setText(QString());
        barbar1_4->setText(QString());
        barbar1_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
