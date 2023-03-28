#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int SimobjCnt;
public:
	SoSimple()
	{
		SimobjCnt++;
	}
};

int SoSimple::SimobjCnt = 0;

int main()
{
	cout << SoSimple::SimobjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::SimobjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim1.SimobjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
	cout << sim2.SimobjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;

	return 0;
}