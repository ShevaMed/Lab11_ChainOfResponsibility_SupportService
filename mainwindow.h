#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "handler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void clearLabels();

private slots:
    void on_answeringMachinePushButton_clicked();

    void on_OperatorPushButton_clicked();

    void on_EngineerPushButton_clicked();

private:
    Ui::MainWindow *ui;
    Handler *handler;
};
#endif // MAINWINDOW_H
