#include <iostream>

int main(void)  // �Լ� �Ӹ� , void -> �Լ� ���, main -> �Լ� �̸�, ()-> �Լ� �Է�(�Է¿� �ִ� void�� �������� ��) => �Լ� : ���, �̸�, �Է�
// datatype -> ����Ÿ�� : int, ����Ÿ�� : char, �Ǽ� : double, float, ���ڿ� : string, char�� �迭���·� ���
{			   // �Լ� ���� (�Լ� ��ü)
	int num = 20;
	// ���� ���� -> ��������(�߰�ȣ{}�ȿ��� ����Ǿ��⶧��) -> �߰�ȣ�� ������ �Ҹ��
	// num ������ ũ�� : int�� ũ�� -> �Ϲ������� 4����Ʈ(�����Ϸ����� ���ݾ� �ٸ�)
	std::cout << "Hello World!" << std::endl;
	// std -> namespace 
	// cout -> c out(���ƿ�) -> ��°� ���õ� / �Է°� ���õȰ� => cin
	// endl -> end line -> new line
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0; // ����
// �Լ� �Ӹ�, �Լ������� �˸��� �κ��� void�� ������ ��� return 0-> error�� �߻���
}			  // �Լ� ��