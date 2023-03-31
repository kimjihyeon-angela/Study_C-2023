// 121_Class.cpp -> 동적할당하기로 바꾸기
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char *name;
	//char name[30];
	int birthday;

public:
	Person(const char *aname, int abirthday)
	{
		
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy(name, aname);
		birthday = abirthday;
	}

	// 동적할당 할 경우 얉은 복사가 실행됨 -> 깊은 복사를 위한 복사 생성자 필요
	Person(const Person& copy) : birthday(copy.birthday)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}
	
	Person& operator = (const Person ref)
	{
		this->name = new char[strlen(ref.name) + 1];
		strcpy(this->name, ref.name);
		this->birthday = ref.birthday;
		return *this;
	}

	~Person()
	{
		delete[]name;
	}

	void ShowPerson()
	{
		cout << "이름 : " << name << " / 생년월일 : " << birthday << endl;
	}

};

//void PersonObj(Person ob)
//{
//	ob.ShowPerson();
//}


int main()
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("강감찬", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}