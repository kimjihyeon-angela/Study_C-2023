// using�� �̿��� �̸������� ���
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
	// using�� �̿��ؼ� �̸����� Hybrid�� ���ǵ� HybFunc�� ȣ���� ������ �̸������� �������� �ʰ� ȣ���ϰڴٴ� ���� ����
	HybFunc();
	// ������ using�� ���� �̸������� �������� HybFunc�Լ� ȣ���ϰ� ����
	return 0;
}