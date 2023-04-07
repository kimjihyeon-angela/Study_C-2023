// #author 김지현
#include <iostream>
#include"calculator.h"
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

    // 계산기 시작 전 출력되는 부분
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    // 계산기 클래스 호출
	Calculator c;

    // 계산기 출력
    while (true)
    {
        // 값 입력 받는 곳
	    cout << "input >> ";
        cin >> x >> oper >> y;
        // 예외처리 (연산자가 나누기이고, 뒤에 오는 값이 0인 경우 -> 에러메세지 출력 후 다시 값 입력받는 부분 출력)
        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        else
        {
            // Calculate에서 x, oper, y값을 받아 result에 결과값 저장해놓기
            result = c.Calculate(x, oper, y);
        }
        // result 값 출력
        cout << "= " << result << endl;
    }

    return 0;
}