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
		cout << "ÀÌ¸§ : " << name << " / " << "ÇÐ¹ø : " << id << " / " << "³ªÀÌ : " << age << endl;
	}
};

int main()
{

	Human h("È«±æµ¿", 1, 30);
	h.getData();

	Human hary[3] = { Human("±è¿µÈñ", 2, 23), Human("±èÃ¶¼ö", 3, 25), Human("¾Æ¹«°³", 4, 35) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}