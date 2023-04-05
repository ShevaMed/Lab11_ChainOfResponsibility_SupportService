#ifndef ENGINEER_H
#define ENGINEER_H

#include "handler.h"

class Engineer : public Handler
{
public:
    Engineer(QLabel *indicator);

    QString execute(QString message) override;
};

#endif // ENGINEER_H
