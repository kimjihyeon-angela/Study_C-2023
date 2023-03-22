#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}
// BestComImpl이라는 이름의 공간을 마련하고 그 안에 함수 SimpleFunc정의함
// 따라서 이 함수는 BestComImpl::SimpleFunc 라고 지칭함


namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	// BestComImpl 내에 정의된 SimpleFunc 함수 호출 문
	ProgComImpl::SimpleFunc();
	return 0;
}