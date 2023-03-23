#include <iostream>

struct human
{
	char name[20];
	int age;
};

int main()
{
	struct human h = { "홍길동", 23 };

	printf("이름 : %s", h.name);
	printf("나이 : %d", h.age);

	return 0;
}