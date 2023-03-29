#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[30];
	int age;

public:
	Person(const char* myname, int myage);
	void getData();
	
};

Person::Person(const char* myname, int myage)
{
	age = myage;
	strcpy(name, myname);
}

void Person::getData()
{
	cout << "이름 : " << name << " / " << "나이 : " << age << endl ;
}

class Student : public Person
{
private:
	int studentId;

public:
	Student(const char* myname, int myage, int mystudentID);
	void ShowData();
};

Student::Student(const char* myname, int myage, int mystudentID) : Person(myname, myage)
{
	studentId = mystudentID;
}

void Student::ShowData()
{
	cout << "학번 : " << studentId << " / ";
	getData();
}

int main()
{
	Student p("홍길동", 23, 1);
	p.ShowData();
	Student s("홍길순", 20, 2);
	s.ShowData();

	return 0;
}
