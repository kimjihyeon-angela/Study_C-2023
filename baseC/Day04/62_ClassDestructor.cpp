#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ��� : 3���� (private, public, protected)
class Myclass
{
	// ��� ���� : �Ӽ�
private:
	char id;
	int age;
	char* name;

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
	printf("������ ȣ��\n");
	id = cid;
	age = cage;
	strcpy_s(name, 10, cname);
}
*/

// ������ ȣ���ϸ鼭 �ٷ� �ʱ�ȭ
// ��ü id�� �����ϴ� �������� cid�� ���ڷ� ���޹޴� �����ڸ� ȣ��
// ��ü age�� �����ϴ� �������� cage�� ���ڷ� ���޹޴� �����ڸ� ȣ��
// : id(cid), age(cage) -> ��� �̴ϼȶ�����
Myclass::Myclass(const char myid, int myage, const char* myname) 
{
	int len = strlen(myname) + 1;
	name = new char[len];
	strcpy(name, myname); // strcpy ��� �� #define _CRT_SECURE_NO_WARNINGS ���� ���� �־��ֱ�
	// strcpy_s(name, len, myname); // #define _CRT_SECURE_NO_WARNINGS �־����� ���� ��� ����
	id = myid;
	age = myage;
}

void Myclass::ShowData() const
{
	cout << id << ' ' << name << ' ' << age << endl;

}


int main()
{
	Myclass s1('2', 20, "ȫ�浿");
	Myclass s2('3', 18, "ȫ���");
	s1.ShowData();
	s2.ShowData();

	return 0;
}