#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		// main �Լ��� AAA obj1�� ��ü������ ������ �����ڰ� ȣ��Ǵ��� Ȯ���ϱ� ���ؼ� ������ ��¹�
		cout << "empty object" << endl;
	}

	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA& ref;
	// �����ڰ� ��������� �����
	// ���� �̴ϼȶ������� ���ؼ� �ʱ�ȭ�� �ؾ���
	const int& num;
	// const �����ڰ� �����
	// ���� �̴ϼȶ������� ���ؼ� �ʱ�ȭ�� �ؾ���

public:
	BBB(AAA& r, const int& n) : ref(r), num(n)
	{

	}

	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I'm ref num " << num << endl;
	}
};

int main()
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;

}