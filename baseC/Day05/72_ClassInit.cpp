#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2)
	{

	}
	
	SoSimple(SoSimple& copy) : num1(copy.num1), num2(copy.num2) 
	// Sosimple 객체를 인자로 받는 생성자 추가, 이니셜라이저를 통해 멤버 대 멤버의 복사 진행
	{
		cout << "Called Sosimple(Sosimple &copy)" << endl;
		// 생성자의 호출을 확인하기 위한 문장
	}
	
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;
	// SoSimple(SoSimple &copy)에 정의된 생성자 호출
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();

	return 0;
}