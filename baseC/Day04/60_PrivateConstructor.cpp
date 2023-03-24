#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
	
public:
	AAA() :num(0) // public 생성자가 정의되었고, 클래스 외부에서 이 생성자를 기반으로 객체 생성해야함
	{

	}

	AAA& CreateInitObj(int n) const // 함수 내에서 23행에 정의된 private 생성자를 이용해서 AAA 객체를 생성 및 반환하고 있음
	{
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) :num(n) {}

};

int main()
{
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;

	return 0;
}