// #author ±èÁöÇö
#pragma once
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_

class Calculator
{
private:
	double x;
	double y;
	char oper;

public:
	double Calculate(double a, char oper, double b);
};

#endif // !__CALCULATOR_H_

