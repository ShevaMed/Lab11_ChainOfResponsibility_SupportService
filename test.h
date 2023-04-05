#ifndef TEST_H
#define TEST_H

#include <QTest>

#include "answeringmachine.h"
#include "operator.h"
#include "engineer.h"

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

private slots:
    void initTestCase();
    void cleanupTestCase();

    void test_AnsweringMachine_execute();
    void test_Operator_execute();
    void test_Engineer_execute();

private:
    QLabel label;
    AnsweringMachine *answeringMachine;
    Operator *operators;
    Engineer *engineer;
    QString input_Machine, input_Operator, input_Engineer, input_Random, input_Empty;
};

#endif // TEST_H
