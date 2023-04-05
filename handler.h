#ifndef HANDLER_H
#define HANDLER_H

#include <QLabel>

class Handler
{
protected:
    Handler *_nextHandler;
    QLabel *_indicator;

public:
    Handler(QLabel *indicator);
    virtual ~Handler();

    Handler* setNextHandler(Handler *nextHandler);
    virtual QString execute(QString message);
};

#endif // HANDLER_H
