#include <iostream>

int main()
{	/*
	int num = 10;    // 초기화
	int num1;	     // 변수 선언
	num1 = 20;	     // 변수 대입
	num = 30;

	char ch;	     // 문자타입
	printf("ch 크기 : %d\n", sizeof(char));

	double d = 3.14; // 실수 타입
	printf("ch 크기 : %d\n", sizeof(double));
	*/

	char ch = 0x7f;  // 16진법 0~9, A(10), B(11), C(12), D(13), E(14), F(15)

	unsigned char ch1 = 0x7f;

	printf("ch : %x \t %d\n", ch, ch);
	printf("ch1 : %x \t %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;

	printf("ch2 : %x \t %d\n", ch2, ch2);
	printf("uch2 : %x \t %d\n", uch2, uch2);

	uch2 = uch2 << 1;
	// 비트연산자, uch2를 왼쪽으로 1bit 이동
	ch2 = ch2 << 1;
	printf("uch2 << 1 : %x\t ch2 : %x\n\n", uch2, ch2);


	ch2 = 0x9f;
	uch2 = 0x9f;

	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1 : %x \t ch2 >> 1 : %x\n\n", uch2, ch2);

	return 0;
}