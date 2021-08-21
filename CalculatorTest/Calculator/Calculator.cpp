#include "Calculator.h"

using namespace std;

double Calculator::resultCalculator(int graphicsFlag, double value1, double value2)
{
    switch (graphicsFlag)
    {
    case 1:
        return value1 * value1;
    case 2:
        return 3.1415926535 * value1 * value1;
    case 3:
        return value1 * value2;
    case 4:
        return 0.5 * value1 * value2;
    case 5:
        return value1 * value2;
    case 6:
        return 3.1415926535 * value1 * value2;
    }
}

double Calculator::resultUnitTransform(int inputUnitFlag, int outputUnitFlag, double calculator)
{
    if (inputUnitFlag == 1 && outputUnitFlag == 1)
        return calculator;

    else if (inputUnitFlag == 1 && outputUnitFlag == 2)
        return calculator / 2.54 / 2.54;

    else if (inputUnitFlag == 2 && outputUnitFlag == 1)
        return calculator * 2.54 * 2.54;

    else if (inputUnitFlag == 2 && outputUnitFlag == 2)
        return calculator;
}

int main()
{
    return 0;
}