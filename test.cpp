#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}, answeringMachine(nullptr), operators(nullptr), engineer(nullptr)
{

}

void Test::initTestCase()
{
    answeringMachine = new AnsweringMachine(&label);
    answeringMachine->setNextHandler(new Operator(&label))->setNextHandler(new Engineer(&label));

    operators = new Operator(&label);
    operators->setNextHandler(new Engineer(&label));

    engineer = new Engineer(&label);
    
    input_Machine = "Connection problems";
    input_Operator = "Problems with the router";
    input_Engineer = "Latency and server issues";
    input_Random = "Problems";
    input_Empty = "";
}

void Test::cleanupTestCase()
{
    delete answeringMachine;
    delete operators;
    delete engineer;
}

void Test::test_AnsweringMachine_execute()
{
    // Arrange
    QString expected_Machine = "Answering Machine is handled this problem";
    QString expected_Operator = "Operator is handled this problem";
    QString expected_Engineer = "Engineer is handled this problem";
    QString expected_Empty = "";

    // Act
    QString result1 = answeringMachine->execute(input_Machine);
    QString result2 = answeringMachine->execute(input_Operator);
    QString result3 = answeringMachine->execute(input_Engineer);
    QString result4 = answeringMachine->execute(input_Random);
    QString result5 = answeringMachine->execute(input_Empty);

    // Assert
    QCOMPARE(result1, expected_Machine);
    QCOMPARE(result2, expected_Operator);
    QCOMPARE(result3, expected_Engineer);
    QCOMPARE(result4, expected_Empty);
    QCOMPARE(result5, expected_Empty);
}

void Test::test_Operator_execute()
{
    // Arrange
    QString expected_Operator = "Operator is handled this problem";
    QString expected_Engineer = "Engineer is handled this problem";
    QString expected_Empty = "";

    // Act
    QString result1 = answeringMachine->execute(input_Operator);
    QString result2 = answeringMachine->execute(input_Engineer);
    QString result3 = answeringMachine->execute(input_Random);
    QString result4 = answeringMachine->execute(input_Empty);

    // Assert
    QCOMPARE(result1, expected_Operator);
    QCOMPARE(result2, expected_Engineer);
    QCOMPARE(result3, expected_Empty);
    QCOMPARE(result4, expected_Empty);
}

void Test::test_Engineer_execute()
{
    // Arrange
    QString expected_Engineer = "Engineer is handled this problem";
    QString expected_Empty = "";

    // Act
    QString result1 = answeringMachine->execute(input_Engineer);
    QString result2 = answeringMachine->execute(input_Random);
    QString result3 = answeringMachine->execute(input_Empty);

    // Assert
    QCOMPARE(result1, expected_Engineer);
    QCOMPARE(result2, expected_Empty);
    QCOMPARE(result3, expected_Empty);
}

//QTEST_MAIN(Test)
