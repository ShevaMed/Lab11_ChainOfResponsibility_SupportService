#include "operator.h"

Operator::Operator(QLabel *indicator) : Handler(indicator)
{

}

QString Operator::execute(QString message)
{

    if (message == "Problems with the router")
    {
        _indicator->setStyleSheet("background-color: green");
        return "Operator is handled this problem";
    }
    _indicator->setStyleSheet("background-color: red");

    return (_nextHandler) ? _nextHandler->execute(message) : QString{};
}
