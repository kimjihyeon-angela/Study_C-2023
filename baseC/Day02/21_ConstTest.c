#include <stdio.h>   // c�ҽ��� �������

int main()
{
	//int num = 10;
	//printf("num : %d\n", num);
	//num = 20;

	// const int num = 10; // ���ȭ ��ų�� �ٷ� �ʱ�ȭ ������� ��
	/*
	int num = 20;
	printf("num : %d\n", num);

	int* p = &num;     // �ּҸ� ������ �� �ִ� ������ &(�ּҿ�����)
	printf("p�� ����� �� : %p\n", p);
	printf("p�� �����ϴ� �� : %d\n", *p);
	*p = 100;		   // * ���� ������
	printf("p�� ����Ű�� ���� ������ �� : %d\n", *p);
	printf("num : %d\n", num);
	*/

	const int num = 10;
	// num = 100 -> num�� ����� �����س��� ������ ���� �Ұ�
	int* p = &num;
	printf("num : %d\n", num);
	*p = 100;
	printf("num : %d\n", num);
	// �����͸� �̿��ϸ� �� ���� ������

	int num1 = 100;
	int num2 = 200;

	// ������ ���� ���ȭ
	const int* pa = &num1;
	printf("pa : %p\n", pa);
	pa = &num2;
	printf("���� �� pa : %p\n", pa);

	//������ ������ ���� ���ȭ
	int* const pb = &num1;
	// pb = &num2

	return 0;
}