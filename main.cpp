#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include "evaluator.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Evaluator *eval = new Evaluator;
    std::string expression;

    while (std::cin >> expression) {
        QString str = eval->autoFix(QString::fromStdString(expression), ".");
        eval->setExpression(str);

        if (eval->error().isEmpty()) {
            qDebug() << QString(HMath::format(eval->eval(), 'n'));
        } else {
            qDebug() << eval->error();
        }
    }

    return a.exec();
}
