#include <iostream>
using namespace std;

class MyClass
{
private:
	int value;

public:
	MyClass(int avalue) : value(avalue)
	{

	}
	// 객체를 매개변수로 사용할 때는 참조형이 와야함
	MyClass operator+(const MyClass& other) const
	{
		return MyClass(value + other.value);
	}

	void print()
	{
		cout << value << endl;
	}

};

int main()
{
	MyClass a(10);
	a.print();

	MyClass b(a);
	b.print();

	MyClass c = b;
	c.print();

	MyClass d = a + b + c;
	d.print();

	return 0;
}