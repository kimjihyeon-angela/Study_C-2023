#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN    = 20,
		MAX_SPD   = 100,
		FUEL_STEP = 2,
		ACC_STEP  = 10,
		BRK_STEP  = 10

	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	// 구조체 안에 함수의 원형만 넣기 -> 한눈에 들어오고 함수의 기능도 쉽게 판단이 됨
	void showCarState();
	void Accel();
	void Break();
};

// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져나옴
void Car::showCarState()
{
	cout << "소유자ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져나옴
void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져나옴
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.showCarState();
	run99.Break();
	run99.showCarState();

	return 0;
}