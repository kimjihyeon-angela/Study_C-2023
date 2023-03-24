#include <iostream>
using namespace std;

class SinivelCap
{
public:
	void Take() const 
	{
		cout << "콧물이 싹~ 납니다." << endl; 
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "재채기가 멎습니다." << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "코가 뻥 뚫립니다." << endl;
	}
};

// 캡슐화가 되어 있는 코 감기약 CONTAC600 클래스 정의
class CONTAC600
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

// CONTAC600 클래스의 정의로 ColdPatient 클래스가 간결해짐
class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap) const
	{
		cap.Take();
	}
};

int main()
{
	CONTAC600 cap;
	ColdPatient sufferer; // 약 복용
	sufferer.TakeCONTAC600(cap);

	return 0;
}