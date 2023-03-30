// 상속에서의 소멸자
#include <iostream>
using namespace std;

class CTest
{
private:
	int num;

public:
	CTest(int n)
	{
		num = n;
		cout << num << " CTest Constructor" << endl;
	}
	~CTest() // 슈퍼클래스 소멸자
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest
{
private:
	int subn;

public:
	CTestSub(int sn, int n) : CTest(sn)
	{
		subn = n;
		cout << subn << " CTestSub Constructor" << endl;
	}

	~CTestSub() // 서브 클래스 소멸자
	{
		cout << "CTestSub Destructor" << endl;
	}
};

int main()
{
	CTest c1(10);
	cout << "=======================" << endl;
	CTestSub c2(1, 10);

	return 0;
}