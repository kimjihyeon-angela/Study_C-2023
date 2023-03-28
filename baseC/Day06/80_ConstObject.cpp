#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{

	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void Showdata() const
	{
		cout << "num : " << num << endl;
	}
};

int main()
{
	const SoSimple obj(7);
	// obj.AddNum(20);
	obj.Showdata();
	return 0;
}
