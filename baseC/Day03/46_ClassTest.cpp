#include <iostream>
using namespace std;

// Ŭ���� ���鶧 ù���ڴ� �빮�ڷ�
class Myclass
{

private: // �ܺ� ���� �Ұ�
	int private_val;
	
public: // �ܺ� ���� ����
	int public_val;
	
protected: // ��ӿ����� ���� ����
	int protected_val;

public: // ����Լ��� ������ public���� �����ؾ���

	void set(int an)
	{
		private_val = an;
	}

	void get()
	{
		cout << "publice_val : " << public_val << endl;
		cout << "private_val : " << private_val << endl;
	}
};

int main()
{
	// Myclass�� ��ü ����
	Myclass o;
	
	// o.private_val;
	
	o.public_val = 100;

	// o.protected_val;
	
	o.set(200);
	o.get();

	return 0;
}