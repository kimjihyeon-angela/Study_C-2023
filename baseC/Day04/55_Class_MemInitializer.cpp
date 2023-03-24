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
	/*
	void set(char aid, int aage, const char* aname)
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
	*/

	Myclass(const char cid, int cage, const char* cname);

	void ShowData() const;

};

/*
Myclass::Myclass(const char cid, int cage, const char* cname)
{
	printf("생성자 호출\n");
	id = cid;
	age = cage;
	strcpy_s(name, 10, cname);
}
*/

// 생성자 호출하면서 바로 초기화
// 객체 id를 생성하는 과정에서 cid를 인자로 전달받는 생성자를 호출
// 객체 age를 생성하는 과정에서 cage를 인자로 전달받는 생성자를 호출
// : id(cid), age(cage) -> 멤버 이니셜라이저
Myclass::Myclass(const char cid, int cage, const char* cname) : id(cid), age(cage)
{
	printf("콜론 초기화\n");
	strcpy_s(name, 10, cname);
}

void Myclass::ShowData() const
{
	cout << id << ' ' << name << ' ' << age << endl;

}


int main()
{
	Myclass s('2', 20, "홍길동");
	s.ShowData();

	return 0;
}