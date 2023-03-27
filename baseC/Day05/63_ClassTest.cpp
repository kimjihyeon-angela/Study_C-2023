#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	// 배열의 경우 선언과 동시에 초기화 시키기 가능
	// char name[20] = "홍길동";
	int id;
	int age;

public:
	Human(const char aname[20], int aid, int aage)
	{
		//setdata()가 하는 역할을 생성가자 하게 됨
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage)
	{
		strcpy(name, aname);
		// name = "홍길동"; 불가능 
		// 배열 선언 후 문자열에 넣을 경우 strcpy 사용해야함
		id = aid;
		age = aage;
	}
	*/

	void getData()
	{
		cout << "이름 : " << name << " / " << "학번 : " << id << " / " << "나이 : " << age << endl;
	}
};

int main()
{
	/*
	setData가 있는 경우 사용되는 방법
	생성자가 있는 경우 Human h;는 사용 불가
	Human h;
	h.setData("홍길동", 1, 30);
	h.getData();
	*/

	// 생성자 활용하여 출력하는 방법
	Human h("홍길동", 1, 30);
	h.getData();

	return 0;
}