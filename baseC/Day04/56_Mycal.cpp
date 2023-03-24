#include <iostream>
using namespace std;

class Mycalu
{
private:
	int num1;
	int num2;

	
public:
	
	Mycalu(int n1, int n2);

	void add(int n1, int n2);
	void sub(int n1, int n2);
	void mul(int n1, int n2);
	void div(int n1, int n2);

};

Mycalu::Mycalu(int n1, int n2) : num1(n1), num2(n2)
{

}

void Mycalu::add(int n1, int n2)
{
	int res;
	res = n1 + n2;
	cout << n1 << " + " << n2 << " = " << res << endl;
}

void Mycalu::sub(int n1, int n2)
{
	int res;
	res = n1 - n2;
	cout << n1 << " - " << n2 << " = " << res << endl;
}

void Mycalu::mul(int n1, int n2)
{
	int res;
	res = n1 * n2;
	cout << n1 << " * " << n2 << " = " << res << endl;
}

void Mycalu::div(int n1, int n2)
{
	int res;
	res = n1 / n2;
	cout << n1 << " / " << n2 << " = " << res << endl;
}

int main()
{
	

	return 0;
}