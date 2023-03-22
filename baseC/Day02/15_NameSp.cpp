#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}
// 이름공간 안에 함수의 선언만 삽입됨

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) // BestComImpl::SimpleFunc 함수 정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}