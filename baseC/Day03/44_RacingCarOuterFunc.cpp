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
	// ����ü �ȿ� �Լ��� ������ �ֱ� -> �Ѵ��� ������ �Լ��� ��ɵ� ���� �Ǵ��� ��
	void showCarState();
	void Accel();
	void Break();
};

// ���� ���ϴ� ����ü�� �̸��� ����ϸ鼭 ����ü ������ �Լ��� ���ǰ� ��������
void Car::showCarState()
{
	cout << "������ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl << endl;
}

// ���� ���ϴ� ����ü�� �̸��� ����ϸ鼭 ����ü ������ �Լ��� ���ǰ� ��������
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

// ���� ���ϴ� ����ü�� �̸��� ����ϸ鼭 ����ü ������ �Լ��� ���ǰ� ��������
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