// #author 김지현
#include <iostream>
#include "calculator.h"
using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{
    // oper가 +, -, *, /인 경우에 맞춰 return 값 설정해주기
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

