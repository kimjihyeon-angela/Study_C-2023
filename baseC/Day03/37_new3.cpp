/*
�޸� ���� �Ҵ� C++ Type
*/

#include <iostream>

using namespace std;

int main()
{
	int size;
	int* arr;

	cout << "�迭�� ���� : ";
	cin >> size;

	arr = new int;

	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << "��° ���� : ";
		cin >> arr[i];
	}


	return 0;
}