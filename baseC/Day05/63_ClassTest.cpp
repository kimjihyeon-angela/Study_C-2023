#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[20];
	// �迭�� ��� ����� ���ÿ� �ʱ�ȭ ��Ű�� ����
	// char name[20] = "ȫ�浿";
	int id;
	int age;

public:
	Human(const char aname[20], int aid, int aage)
	{
		//setdata()�� �ϴ� ������ �������� �ϰ� ��
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage)
	{
		strcpy(name, aname);
		// name = "ȫ�浿"; �Ұ��� 
		// �迭 ���� �� ���ڿ��� ���� ��� strcpy ����ؾ���
		id = aid;
		age = aage;
	}
	*/

	void getData()
	{
		cout << "�̸� : " << name << " / " << "�й� : " << id << " / " << "���� : " << age << endl;
	}
};

int main()
{
	/*
	setData�� �ִ� ��� ���Ǵ� ���
	�����ڰ� �ִ� ��� Human h;�� ��� �Ұ�
	Human h;
	h.setData("ȫ�浿", 1, 30);
	h.getData();
	*/

	// ������ Ȱ���Ͽ� ����ϴ� ���
	Human h("ȫ�浿", 1, 30);
	h.getData();

	return 0;
}