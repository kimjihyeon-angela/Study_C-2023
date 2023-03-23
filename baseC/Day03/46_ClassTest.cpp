#include <iostream>
using namespace std;

// 클래스 만들때 첫글자는 대문자로
class Myclass
{

private: // 외부 접근 불가
	int private_val;
	
public: // 외부 접근 가능
	int public_val;
	
protected: // 상속에서만 접근 가능
	int protected_val;

public: // 멤버함수는 무조건 public으로 선언해야함

	void set(int an)
	{
		private_val = an;
	}

	void get()
	{
		cout << "publice_val : " << public_val << endl;
		cout << "private_val : " << private_val << endl;
	}
};

int main()
{
	// Myclass의 객체 생성
	Myclass o;
	
	// o.private_val;
	
	o.public_val = 100;

	// o.protected_val;
	
	o.set(200);
	o.get();

	return 0;
}