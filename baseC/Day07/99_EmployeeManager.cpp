#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];

public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	
	void ShowYourName() const
	{
		cout << "name : " << name << endl;
	}
};

class PermanentWorker : public Employee
{
private:
	int salary;

public :
	PermanentWorker(const char* name, int money) : Employee(name), salary(money)
	{

	}
	
	int GetPay() const
	{
		return salary;
	}
	
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHOur;

public:
	TemporaryWorker(const char* name, int pay) : Employee(name), workTime(0), payPerHOur(pay)
	{

	}

	void AddWorkTime(int time)
	{
		workTime += time;
	}
	
	int GetPay() const
	{
		return workTime * payPerHOur;
	}
	
	void ShowSalaryInfor() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;

public:
	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{

	}

	void AddSalesResult(int value)
	{
		salesResult += value;
	}

	int GetPay() const
	{
		return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
	}

	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary : " << GetPay() << endl << endl;
	}
};

class EmplyeeHandler
{
private:
	Employee* empList[50];
	int empNum;

public:
	EmplyeeHandler() : empNum(0)
	{

	}

	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}

	void ShowAllSalaryInfo() const
	{
		/*
		for (int i=0; i<empNum; i++)
			sum += empList[i] -> GetPay();
		*/
	}

	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		*/
		cout << "salary sum : " << sum << endl;
	}

	~EmplyeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main()
{
	// ���� ������ �������� ����� ��Ʈ�� Ŭ������ ��ü ����
	EmplyeeHandler handler;

	// ������ ���
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// �ӽ��� ���
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	// ������ ���
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	// �̹��� �����ؾ��� �޿��� ����
	handler.ShowAllSalaryInfo();

	// �̹� �޿� �����ؾ� �� �޿��� ����
	handler.ShowTotalSalary();

	return 0;

}

/*
�迭 ������, �����͹迭

�迭������ : �������ε� �迭�� ����Ű�� ������
������ �迭 : �迭�ε� �����ͷ� �̷���� �迭

������ �迭
int n1 = 10, n2 = 20, n3 = 30;
int* ary[3] = {&n1, &n2, &n3};
  * &n1 -> n1�� �ּҰ�

 1���� �迭 ������
 int * pa = &a;
 int ary[3] = {1, 2, 3};
 int *pary = ary;

 2���� �迭 ������
 int arr[2] [3] ={{1, 2, 3},4, 5,6}};
 int (*parr)[3] = arr;
 
 */