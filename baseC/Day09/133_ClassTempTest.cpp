#include <iostream>
using namespace std;

template <typename T>		// Ŭ���� ���ø� �Ϲ�ȭ
class CTest
{
private:
	T data;

public:
	CTest(T adata) : data(adata)
	{

	}

	T getData()
	{
		retrun data;
	}
};

template <>				// Ŭ���� ���ø� Ư��ȭ
class CTest<char>
{
private:
	char data;
	
public:
	CTest(char adata) :data(adata)
	{

	}

	char getData()
	{
		return data;
	}

};

int main()
{
	CTest<int> obj(10);
	cout << obj.getData() << endl;

	CTest<char> obj1('a');
	cout << obj1.getData() << endl;

	return 0;
}