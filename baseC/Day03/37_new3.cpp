/*
메모리 동적 할당 C++ Type
*/

#include <iostream>

using namespace std;

int main()
{
	int size;
	int* arr;

	cout << "배열의 개수 : ";
	cin >> size;

	arr = new int;

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "번째 숫자 : ";
		cin >> arr[i];
	}


	return 0;
}