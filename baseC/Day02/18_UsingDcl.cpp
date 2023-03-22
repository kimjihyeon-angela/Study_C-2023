// using을 이용한 이름공간의 명시
#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main()
{
	using Hybrid::HybFunc;
	// using을 이용해서 이름공간 Hybrid에 정의된 HybFunc를 호출할 때에는 이름공간을 지정하지 않고 호출하겠다는 것을 선언
	HybFunc();
	// 앞줄의 using을 통해 이름공간의 지정없이 HybFunc함수 호출하고 있음
	return 0;
}