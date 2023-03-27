#include <iostream>
using namespace std;

class SelfRef
{
private:
	int num;
	
public:
	SelfRef(int n) : num(n)
	{
		cout << "°´Ã¼»ý¼º" << endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}

	SelfRef& showTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};

int main()
{
	SelfRef obj(3);
	SelfRef& ref = obj.Adder(2);

	obj.showTwoNumber();
	ref.showTwoNumber();

	ref.Adder(1).showTwoNumber().Adder(2).showTwoNumber();
	return 0;
}