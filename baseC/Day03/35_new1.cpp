/*
�޸� ���� �Ҵ� (C Type)
*/

#include <iostream>
using namespace std;

int main()
{
	int* arr; 
	int size;

	printf("�迭 ���� ���� : ");
	// scanf("%d", size); -> C++ cin���� �������� size�տ� �ּ� ������ ��� ��
	scanf_s("%d", &size); // scanf �� �Է¹��� �� �ּ� ������ �ʿ�

	arr = (int*) malloc(sizeof(int)); // heap ������ �Ҵ�
	// arr = malloc(sizeof(int)); -> (int*)�����ϸ� error �߻���


	// cout << "������� �迭 ũ�� : " << sizeof(arr) << endl;
	printf("������� �迭 ũ�� : %d\n", sizeof(arr));
	printf("%d\n", sizeof(int));

	free(arr); // �޸� ����


	return 0;
}