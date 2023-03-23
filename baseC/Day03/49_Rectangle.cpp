#include <iostream>
#include "49.Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point&ul, const Point &lr)
{
	if (ul.Getx() > lr.Getx() || ul.Getx() > lr.Gety())
	{
		cout << "잘못된 위치 정보 전달" << endl;
		return false;
	}

	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단 : " << '[' << upLeft.Getx() << ",";
	cout << upLeft.Gety() << ']' << endl;
	cout << "우 하단 : " << '[' << lowRight.Gety() << ",";
	cout << lowRight.Gety() << ']' << endl;
}