#ifndef OPERATOR_H
#define OPERATOR_H

#include "handler.h"

class Operator : public Handler
{
public:
    Operator(QLabel *indicator);

    QString execute(QString message) override;
};

#endif // OPERATOR_H
