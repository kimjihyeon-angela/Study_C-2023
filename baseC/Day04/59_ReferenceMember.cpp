#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		// main 함수의 AAA obj1의 객체생성시 실제로 생성자가 호출되는지 확인하기 위해서 삽입한 출력문
		cout << "empty object" << endl;
	}

	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	// 참조자가 멤버변수로 선언됨
	// 따라서 이니셜라이저를 통해서 초기화를 해야함
	const int& num;
	// const 참조자가 선언됨
	// 따라서 이니셜라이저를 통해서 초기화를 해야함

public:
	BBB(AAA& r, const int& n) : ref(r), num(n)
	{

	}

	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I'm ref num " << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;

}