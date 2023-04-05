#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "answeringmachine.h"
#include "operator.h"
#include "engineer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    handler = new AnsweringMachine(ui->machineLabel);
    handler->setNextHandler(new Operator(ui->operatorLabel))->setNextHandler(new Engineer(ui->engineerLabel));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete handler;
}

void MainWindow::clearLabels()
{
    ui->machineLabel->setStyleSheet("");
    ui->operatorLabel->setStyleSheet("");
    ui->engineerLabel->setStyleSheet("");
}


void MainWindow::on_answeringMachinePushButton_clicked()
{
    clearLabels();
    ui->resultLabel->setText(handler->execute(ui->answeringMachinePushButton->text()));
}


void MainWindow::on_OperatorPushButton_clicked()
{
    clearLabels();
    ui->resultLabel->setText(handler->execute(ui->OperatorPushButton->text()));
}


void MainWindow::on_EngineerPushButton_clicked()
{
    clearLabels();
    ui->resultLabel->setText(handler->execute(ui->EngineerPushButton->text()));
}

