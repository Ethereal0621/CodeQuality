/*****************************************************************//**
 * \file   main.cpp
 * \brief  程序唯一入口
 * \author 所以爱会消失对不队
 * \date   August 2021
 *********************************************************************/
#include "calculator.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Calculator windows;
    windows.show();

    return a.exec();
}
