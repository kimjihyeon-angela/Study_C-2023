#include <iostream>
// #define CRT_SECURE_NO_WARNINGS
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법 : 3가지 (private, public, protected)
class Myclass
{
	// 멤버 변수 : 속성
private:
	char id;
	int age;
	char name[10];
	// 멤버 함수 : 메소드(기능) -> public으로 해야함(접근 가능하게 하기 위해)
public:
	void set(char aid, int aage, const char *aname)
	{
		id = aid;
		age = aage;
		// name = aname;
		strcpy_s(name, 10, aname);
	}

	void get()
	{
		cout << id << ' ' << name << ' ' << age << endl;
	}

};

int main()
{
	Myclass s;
	s.set('1', 20, "홍길동");
	s.get();

	return 0;
}