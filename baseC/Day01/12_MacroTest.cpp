#include <iostream>

#define SUM(x, y)	x + y // ��ũ�� �Լ� // Ctrl+d �ش� �� ��, �� ��
#define SQUARE(x)	x * x
#define SQUARE1(x)	(x) * (x)
// �Ϲ� �Լ��� main �Լ����� ������ �ش� �Լ��� �Ѿ�� ������ �� �ٽ� main�Լ��� �Ѿ��
// ��ũ�� �Լ��� main �Լ� ������ �ٷ� �����
// ��ũ�� �Լ� -> �ڷ��� �ʿ� ����

void func()
{

}

int main()
{

	std::cout << SUM(10, 20) << std::endl;
	std::cout << SQUARE(10) << std::endl;
	std::cout << SQUARE(10+1) << std::endl;
	// 10 + 1 * 10 + 1�� ������� 21 ����
	std::cout << SQUARE1(10+1) << std::endl;
	// (10+1) * (10+1) -> 11 * 11 ���� ����
	return 0;
}