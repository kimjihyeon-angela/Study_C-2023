#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void)
	{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}
// BestComImpl�̶�� �̸��� ������ �����ϰ� �� �ȿ� �Լ� SimpleFunc������
// ���� �� �Լ��� BestComImpl::SimpleFunc ��� ��Ī��


namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

int main(void)
{
	BestComImpl::SimpleFunc();
	// BestComImpl ���� ���ǵ� SimpleFunc �Լ� ȣ�� ��
	ProgComImpl::SimpleFunc();
	return 0;
}