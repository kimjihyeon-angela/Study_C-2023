// #author ������
#include <iostream>
#include "calculator.h"
using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{
    // oper�� +, -, *, /�� ��쿡 ���� return �� �������ֱ�
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }

}

