#include <stdio.h>   // c소스의 헤더파일

int main()
{
	//int num = 10;
	//printf("num : %d\n", num);
	//num = 20;

	// const int num = 10; // 상수화 시킬때 바로 초기화 시켜줘야 함
	/*
	int num = 20;
	printf("num : %d\n", num);

	int* p = &num;     // 주소를 저장할 수 있는 포인터 &(주소연산자)
	printf("p에 저장된 값 : %p\n", p);
	printf("p가 참조하는 값 : %d\n", *p);
	*p = 100;		   // * 참조 연산자
	printf("p가 가리키는 곳의 데이터 값 : %d\n", *p);
	printf("num : %d\n", num);
	*/

	const int num = 10;
	// num = 100 -> num을 상수로 선언해놨기 때문에 변경 불가
	int* p = &num;
	printf("num : %d\n", num);
	*p = 100;
	printf("num : %d\n", num);
	// 포인터를 이용하면 값 변경 가능함

	int num1 = 100;
	int num2 = 200;

	// 데이터 값을 상수화
	const int* pa = &num1;
	printf("pa : %p\n", pa);
	pa = &num2;
	printf("변경 후 pa : %p\n", pa);

	//포인터 변수의 값을 상수화
	int* const pb = &num1;
	// pb = &num2

	return 0;
}