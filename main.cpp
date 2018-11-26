#include <QCoreApplication>
#include <QDebug>
#include "evaluator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Evaluator *eval = new Evaluator;
    QString str = eval->autoFix("pi(5)", ".");
    eval->setExpression(str);

    qDebug() << QString(HMath::formatFixed(eval->eval()));

    return a.exec();
}
