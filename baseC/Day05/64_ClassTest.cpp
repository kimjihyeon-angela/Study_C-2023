#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
	// Human ary[10];
	int id;
	int age;

public:
	Human(const char *aname, int aid, int aage) // aname[20] == *aname
	{
		// int len = strlen(name)+1;
		// name = new char[len];
		name = new char[strlen(aname)+1];
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	~Human()
	{
		delete[]name;
	}

	void getData()
	{
		cout << "�̸� : " << name << " / " << "�й� : " << id << " / " << "���� : " << age << endl;
	}
};

int main()
{

	Human h("ȫ�浿", 1, 30);
	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 25), Human("�ƹ���", 4, 35) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}