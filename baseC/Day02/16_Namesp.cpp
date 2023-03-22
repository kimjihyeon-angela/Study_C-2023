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

// 3, 8�� -> �̸������� �� �̻��� �������� ����� ������ �� ����
// => ���� �������� ���ֵ�
// ���� ������ ���� �� ���� �� ������ �Űܼ� �����ص� ������

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
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();
	// BestComImpl::SimpleFunc(void) �Լ��� ������ �̸������� ���ǵ� �Լ��� ���� ȣ�⵵ ������
	ProgComImpl::SimpleFunc();
	// �Լ��� ȣ�� ��ġ�� ��� �ǰ�, �̸����� ProgComImpl�� ���ǵ� �Լ� SimpleFunc�� ȣ���ϴ� ������� ���̰� ����
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "Program�� ������ �Լ�" << std::endl;
}