#include <iostream>
// #define CRT_SECURE_NO_WARNINGS
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ��� : 3���� (private, public, protected)
class Myclass
{
	// ��� ���� : �Ӽ�
private:
	char id;
	int age;
	char name[10];

	// ��� �Լ� : �޼ҵ�(���) -> public���� �ؾ���(���� �����ϰ� �ϱ� ����)
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

Myclass::Myclass(const char cid, int cage, const char* cname)
{
	printf("������ ȣ��\n");
	id = cid;
	age = cage;
	strcpy_s(name, 10, cname);
}

void Myclass::ShowData() const
{
	cout << id << ' ' << name << ' ' << age << endl;

}


int main()
{
	Myclass s('2', 20, "ȫ�浿");
	s.ShowData();

	return 0;
}