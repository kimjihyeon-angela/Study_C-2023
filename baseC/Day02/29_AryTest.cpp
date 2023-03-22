#include <iostream>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };
	printf("ary 전체 크기 : %d\n", sizeof(ary));

	int* pary = ary; // 주소 연산자 없어도 error 없음 why? Arrary 자체가 주소이기 때문

	printf("ary 주소 : %p\n", ary);
	printf("ary[0] 주소 : %p\n", ary[0]);
	printf("ary + 1 : %p\n", ary + 1);
	printf("ary[1] 주소 : %p\n", ary[1]);

	printf("Pary 주소 : %p\n", &pary);
	printf("pary 값 : %p\n", pary);
	printf("pary[0] 값 : %p\n", pary[0]);
	printf("pary[0] 값 : %d\n", &pary[0]);
	printf("pary[0] 값 : %d\n", *pary);
	printf("pary[1] 값 : %d\n", *pary+1);

	return 0;
}