#include <iostream>
#include "49.Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point&ul, const Point &lr)
{
	if (ul.Getx() > lr.Getx() || ul.Getx() > lr.Gety())
	{
		cout << "�߸��� ��ġ ���� ����" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ��� : " << '[' << upLeft.Getx() << ",";
	cout << upLeft.Gety() << ']' << endl;
	cout << "�� �ϴ� : " << '[' << lowRight.Gety() << ",";
	cout << lowRight.Gety() << ']' << endl;
}