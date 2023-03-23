/*
메모리 동적 할당 (C Type)
*/

#include <iostream>
using namespace std;

int main()
{
	int* arr; 
	int size;

	printf("배열 방의 갯수 : ");
	// scanf("%d", size); -> C++ cin으로 받을때는 size앞에 주소 연산자 없어도 됨
	scanf_s("%d", &size); // scanf 로 입력받을 때 주소 연산자 필요

	arr = (int*) malloc(sizeof(int)); // heap 여역에 할당
	// arr = malloc(sizeof(int)); -> (int*)생략하면 error 발생함


	// cout << "만들어진 배열 크기 : " << sizeof(arr) << endl;
	printf("만들어진 배열 크기 : %d\n", sizeof(arr));
	printf("%d\n", sizeof(int));

	free(arr); // 메모리 해제


	return 0;
}