#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
	void PrettyFunc(void);
}

/*
namespace BestComImpl
{
	void PrettyFunc(void);
}
*/

// 3, 8행 -> 이름공간은 둘 이상의 영역으로 나위어서 선언할 수 있음
// => 동일 공간으로 간주됨
// 따로 정의해 놓은 두 개를 한 곳으로 옮겨서 선언해도 동작함

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	// BestComImpl::SimpleFunc(void) 함수와 동일한 이름공간에 정의된 함수를 직접 호출도 가능함
	ProgComImpl::SimpleFunc();
	// 함수의 호출 위치가 어떻게 되건, 이름공간 ProgComImpl에 정의된 함수 SimpleFunc를 호출하는 방법에는 차이가 없음
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "Program이 정의한 함수" << std::endl;
}