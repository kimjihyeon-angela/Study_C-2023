#include <iostream>
using namespace std;

class Myclass
{
private:
	int num;

public:
	Myclass(int n) : num(n)
	{
		cout << "생성자 호출" << endl;
	}
	Myclass(Myclass& other)
	{
		cout << "복사생성자 호출" << endl;
		num = other.num;
	}

	void getData()
	{
		cout << num << endl;
	}
};

int main()
{
	Myclass m1(10);
	Myclass m2 = m1;
	Myclass m3(m2);
	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}