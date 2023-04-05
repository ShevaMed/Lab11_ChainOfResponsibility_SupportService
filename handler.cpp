#include "handler.h"


Handler::Handler(QLabel *indicator) : _nextHandler(nullptr), _indicator(indicator)
{

}

Handler::~Handler()
{
    delete _nextHandler;
}

Handler *Handler::setNextHandler(Handler *nextHandler)
{
    _nextHandler = nextHandler;
    return _nextHandler;
}

QString Handler::execute(QString message)
{
    if (_nextHandler)
        return _nextHandler->execute(message);

    return {};
}
