#ifndef ANSWERINGMACHINE_H
#define ANSWERINGMACHINE_H

#include "handler.h"

class AnsweringMachine : public Handler
{
public:
    AnsweringMachine(QLabel *indicator);

    QString execute(QString message) override;
};

#endif // ANSWERINGMACHINE_H
