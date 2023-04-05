/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *machineLabel;
    QLabel *operatorLabel;
    QLabel *engineerLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *answeringMachinePushButton;
    QPushButton *OperatorPushButton;
    QPushButton *EngineerPushButton;
    QLabel *resultLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        machineLabel = new QLabel(centralwidget);
        machineLabel->setObjectName("machineLabel");
        machineLabel->setGeometry(QRect(110, 210, 30, 30));
        operatorLabel = new QLabel(centralwidget);
        operatorLabel->setObjectName("operatorLabel");
        operatorLabel->setGeometry(QRect(370, 210, 30, 30));
        engineerLabel = new QLabel(centralwidget);
        engineerLabel->setObjectName("engineerLabel");
        engineerLabel->setGeometry(QRect(650, 210, 30, 30));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 231, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/AnsweringMachine.jpg")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 20, 231, 171));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/Operator.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(540, 20, 231, 171));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/Engineer.jpg")));
        label_3->setScaledContents(true);
        answeringMachinePushButton = new QPushButton(centralwidget);
        answeringMachinePushButton->setObjectName("answeringMachinePushButton");
        answeringMachinePushButton->setGeometry(QRect(20, 320, 261, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        answeringMachinePushButton->setFont(font);
        OperatorPushButton = new QPushButton(centralwidget);
        OperatorPushButton->setObjectName("OperatorPushButton");
        OperatorPushButton->setGeometry(QRect(20, 370, 261, 41));
        OperatorPushButton->setFont(font);
        EngineerPushButton = new QPushButton(centralwidget);
        EngineerPushButton->setObjectName("EngineerPushButton");
        EngineerPushButton->setGeometry(QRect(20, 420, 261, 41));
        EngineerPushButton->setFont(font);
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(370, 320, 401, 41));
        QFont font1;
        font1.setPointSize(14);
        resultLabel->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Support service", nullptr));
        machineLabel->setText(QString());
        operatorLabel->setText(QString());
        engineerLabel->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        answeringMachinePushButton->setText(QCoreApplication::translate("MainWindow", "Connection problems", nullptr));
        OperatorPushButton->setText(QCoreApplication::translate("MainWindow", "Problems with the router", nullptr));
        EngineerPushButton->setText(QCoreApplication::translate("MainWindow", "Latency and server issues", nullptr));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
