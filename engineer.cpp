#include "engineer.h"

Engineer::Engineer(QLabel *indicator) : Handler(indicator)
{

}

QString Engineer::execute(QString message)
{

    if (message == "Latency and server issues")
    {
        _indicator->setStyleSheet("background-color: green");
        return "Engineer is handled this problem";
    }
    _indicator->setStyleSheet("background-color: red");

    return (_nextHandler) ? _nextHandler->execute(message) : QString{};
}
