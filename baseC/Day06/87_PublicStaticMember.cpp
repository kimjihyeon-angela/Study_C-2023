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
	cout << SoSimple::SimobjCnt << "��° SoSimple ��ü" << endl;

	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::SimobjCnt << "��° SoSimple ��ü" << endl;
	cout << sim1.SimobjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.SimobjCnt << "��° SoSimple ��ü" << endl;

	return 0;
}