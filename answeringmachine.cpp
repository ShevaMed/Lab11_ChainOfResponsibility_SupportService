#include "answeringmachine.h"

AnsweringMachine::AnsweringMachine(QLabel *indicator) : Handler(indicator)
{

}

QString AnsweringMachine::execute(QString message)
{

    if (message == "Connection problems")
    {
        _indicator->setStyleSheet("background-color: green");
        return "Answering Machine is handled this problem";
    }
    _indicator->setStyleSheet("background-color: red");


    return (_nextHandler) ? _nextHandler->execute(message) : QString{};
}
