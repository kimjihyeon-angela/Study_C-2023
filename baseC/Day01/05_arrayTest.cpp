#include <iostream>

int main()
{
	char ch[5];	// �迭����, ���ڿ�
	// ch�迭 5�� ���� -> honga�� �Է��� ��� error �߻���
	// ���ڿ� �������� Null���� �ֱ� ������ ���� �Է��ϰ� ���� ���ڿ����� 1�� ���� �迭�� ��������
	char cha[5];
	cha[0] = 'h';
	cha[1] = 'o';
	cha[2] = 'n';
	cha[3] = 'g';
	cha[4] = 'a'; // ���� �ϳ��� ����			
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", cha[i]);
	}
	
	//printf("char ũ�� : %d\n", sizeof(char));
	//printf("ch[4] : %c\n", cha[4]);
	// �ƹ��͵� ��� �ȵ�
	// printf("ch[4] : %s\n", cha[4]);
	// null ��µ�
	// ch = "hong"; -> error �߻� => �ε��� ����Ͽ� �ѱ��ھ� �־������
	// �ʱ�ȭ �Ҷ� hong�־��ָ� �Էµ�
	
	//printf("ch[4] : %s\n", ch[4]);

	printf("�迭�̸� cha: %p\n", ch);
	printf("�迭�̸� cha: %p\n", &ch);



	return 0;
}