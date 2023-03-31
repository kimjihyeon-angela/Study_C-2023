#include <iostream>
using namespace std;

template <typename T>		// 클래스 템플릿 일반화
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

template <>				// 클래스 템플릿 특수화
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