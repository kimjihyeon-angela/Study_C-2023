#include <iostream>
/*
int main()
{
	
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
	

	return 0;
}

// �Է°� ����� ���� �Լ�
void func(void)
{
	int a = 10;
	int b = 20;
	int res;

	res = a + b;
	std::cout << "res : " << res << std::endl;

}


// �Է��� �ִ� �Լ�
void func(int n1, int n2) // �Ű� ������ ������ ��� ��
{
	int	res;
	
	res = n1 + n2;
	// int res = n1 + n2;
	std::cout << "res : " << res << std::endl;
}
*/

// �Է°� ����� �ִ� �Լ�
int func(int n1, int n2);  // �Լ� ���� 

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2); // �Լ� ȣ��, return �Ǵ� ���� ȣ���ؾ���

	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << func(num1, num2) << std::endl;

	return 0;
}

// �Լ�����
int func(int n1, int n2)
{
	int res;
	
	res = n1 + n2;
	return res;
	// ����� return������ �ۼ�
}