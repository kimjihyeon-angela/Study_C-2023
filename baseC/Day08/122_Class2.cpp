// 121_Class.cpp -> �����Ҵ��ϱ�� �ٲٱ�
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

	// �����Ҵ� �� ��� ���� ���簡 ����� -> ���� ���縦 ���� ���� ������ �ʿ�
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
		cout << "�̸� : " << name << " / ������� : " << birthday << endl;
	}

};

//void PersonObj(Person ob)
//{
//	ob.ShowPerson();
//}


int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("������", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}