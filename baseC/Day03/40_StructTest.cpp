#include <iostream>

struct human
{
	char name[20];
	int age;
};

int main()
{
	struct human h = { "ȫ�浿", 23 };

	printf("�̸� : %s", h.name);
	printf("���� : %d", h.age);

	return 0;
}