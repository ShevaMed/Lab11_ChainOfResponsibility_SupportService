#include "mainwindow.h"

#include <QApplication>

#include "test.h"

int main(int argc, char *argv[])
{
    // Set the Qt::AA_Use96Dpi attribute to disable high DPI scaling
    QCoreApplication::setAttribute(Qt::AA_Use96Dpi);

    QApplication a(argc, argv);

    int result_test = QTest::qExec(new Test, argc, argv);

    if (result_test)
        return 1;

    MainWindow w;
    w.show();

    return a.exec();
}

