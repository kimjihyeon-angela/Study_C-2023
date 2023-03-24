#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법 : 3가지 (private, public, protected)
class Myclass
{
	// 멤버 변수 : 속성
private:
	char id;
	int age;
	char* name;

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

	Myclass(const char myid, int myage, const char* myname);

	void ShowData() const;
	
	~Myclass()
	{
		delete[]name;
		// cout << "called destructor!" << endl;
	}

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
Myclass::Myclass(const char myid, int myage, const char* myname) 
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname); // strcpy 사용 시 #define _CRT_SECURE_NO_WARNINGS 제일 위에 넣어주기
	// strcpy_s(name, len, myname); // #define _CRT_SECURE_NO_WARNINGS 넣어주지 않을 경우 사용법
	id = myid;
	age = myage;
}

void Myclass::ShowData() const
{
	cout << id << ' ' << name << ' ' << age << endl;

}


int main()
{
	Myclass s1('2', 20, "홍길동");
	Myclass s2('3', 18, "홍길순");
	s1.ShowData();
	s2.ShowData();

	return 0;
}