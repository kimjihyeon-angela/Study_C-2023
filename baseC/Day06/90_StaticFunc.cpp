#include <iostream>
using namespace std;

class StaticTest
{
private:
	static int a; // 멤버변수의 static
	int b;

public:
	StaticTest();
	static void setData(int aa);
	void print();
};

int StaticTest::a = 10; // static 멤버변수 초기화

StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::setData(int aa)
{
	// this->a = 30; -> this는 비정적 멤버 함수 내에서만 사용가능 this -> 멤버 객체를 가리키는 함수 / static : 클래스
	a = aa;
}

void StaticTest::print()
{
	cout << "a : " << a << ", b : " << b << endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();

	return 0;
}