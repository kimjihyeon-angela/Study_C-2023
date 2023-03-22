#include <iostream>

void func()
{
	std::cout << "func()\n" << std::endl;
}

void func(int a)
{
	std::cout << "func(a)\n" << std::endl;

}

void func(int a, int b)
{
	std::cout << "func(a b)\n" << std::endl;

}


void func(char a)
{
	std::cout << "func(a)\n" << std::endl;

}

int main()
{
	int n = 10;
	int n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}

/* C���� std::cout -> printf�� �ٲ㼭 ������ ��� error�� �߻���
   C������ �Լ��� ã�� �� �Լ� �̸����� ã��
   func �Լ� �̸��� ���� ������ error�� �߻��ϴ� ����
   func, func1�� �̸��� �ٸ��� �� ��� error�߻� ����


   C++������ �Ű������� Ÿ��, ������ ���� �ٸ��� �νĵǾ� error�߻� ����
   ����� ���´� �Լ� ���� ���ǿ� �ش����� ����
*/