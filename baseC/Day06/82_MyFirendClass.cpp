#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;

public:
	Boy(int len) : height(len)
	{

	}

	void ShowYourFriendInfo(Girl& frm);
};

class Girl
{
private:
	char phNum[20];

public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}
	void ShowYourFirendInfo(Boy& frm);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her Phone number : " << frn.phNum << endl;
}

void Girl::ShowYourFirendInfo(Boy& frn)
{
	cout << "His height : " << frn.height << endl;
}

int main()
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFirendInfo(boy);

	return 0;
}