#include <iostream>

int main()
{
	int ary[5] = { 1, 2, 3, 4, 5 };
	printf("ary ��ü ũ�� : %d\n", sizeof(ary));

	int* pary = ary; // �ּ� ������ ��� error ���� why? Arrary ��ü�� �ּ��̱� ����

	printf("ary �ּ� : %p\n", ary);
	printf("ary[0] �ּ� : %p\n", ary[0]);
	printf("ary + 1 : %p\n", ary + 1);
	printf("ary[1] �ּ� : %p\n", ary[1]);

	printf("Pary �ּ� : %p\n", &pary);
	printf("pary �� : %p\n", pary);
	printf("pary[0] �� : %p\n", pary[0]);
	printf("pary[0] �� : %d\n", &pary[0]);
	printf("pary[0] �� : %d\n", *pary);
	printf("pary[1] �� : %d\n", *pary+1);

	return 0;
}