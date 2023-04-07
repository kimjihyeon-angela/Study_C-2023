// #author ������
#include <iostream>
#include"calculator.h"
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

    // ���� ���� �� ��µǴ� �κ�
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    // ���� Ŭ���� ȣ��
	Calculator c;

    // ���� ���
    while (true)
    {
        // �� �Է� �޴� ��
	    cout << "input >> ";
        cin >> x >> oper >> y;
        // ����ó�� (�����ڰ� �������̰�, �ڿ� ���� ���� 0�� ��� -> �����޼��� ��� �� �ٽ� �� �Է¹޴� �κ� ���)
        if (oper == '/' && y == 0)
        {
            cout << "Attempted to divide by zero!" << endl;
            continue;
        }
        else
        {
            // Calculate���� x, oper, y���� �޾� result�� ����� �����س���
            result = c.Calculate(x, oper, y);
        }
        // result �� ���
        cout << "= " << result << endl;
    }

    return 0;
}