// 가상소멸자
#include <iostream>
using namespace std;

class CTest
{
private:
	int num;

public:
	CTest(int n) : num(n)
	{
		cout << num << " CTest constructor" << endl;
	}

	~CTest()
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub:public CTest
{
private:
	int snum;

public:
	CTestSub(int n1, int n2) :CTest(n1), snum(n2)
	{
		cout << snum << " CTestSub Constructor" << endl;
	}

	virtual ~CTestSub()
	{
		cout << "CTestSub Destructor" << endl;
	}

	void func()
	{
		cout << "CTest func()" << endl;
	}

	virtual void Vfunc()		// 가상함수 
	{
		cout << "CTest Vfunc()" << endl;
	}

	void vfunc()
	{
		cout << "CTestSub vfunc()" << endl;
	}
};

int main()
{
	/*
	CTest c1(10);
	cout << "===========================" << endl;
	CTestSub c2(1, 10);
	cout << "===========================" << endl;
	*/
	CTest* ps = new CTestSub(3, 33);
	
	delete ps;

	return 0;
}