#include <iostream>
using namespace std;

class MyClass
{
private:
	int num1;
	int num2;
	const char* name;

public:
	MyClass(int anum1 = 0, int anum2=0, const char* aname = nullptr) : num1(anum1), num2(anum2), name(aname)
	{
		
	}

	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << name << endl;
	}
};

int main()
{
	MyClass m(1, 2, "hong");
	m.ShowData();
	MyClass cm(m);			// cm = m
	cm.ShowData();

	MyClass cm1;
	cm1 = cm;
	cm1.ShowData();

	return 0;
}