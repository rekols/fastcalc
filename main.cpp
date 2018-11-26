#include <QCoreApplication>
#include <QDebug>
#include "evaluator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Evaluator *eval = new Evaluator;
    QString str = eval->autoFix("111*333333333333333333+33333", ".");
    eval->setExpression(str);

    qDebug() << QString(HMath::formatFixed(eval->eval()));

    return a.exec();
}
