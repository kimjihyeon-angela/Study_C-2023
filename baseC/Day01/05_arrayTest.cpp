#include <iostream>

int main()
{
	char ch[5];	// 배열선언, 문자열
	// ch배열 5개 만듦 -> honga를 입력할 경우 error 발생함
	// 문자열 마지막에 Null값이 있기 때문에 내가 입력하고 싶은 문자열보다 1개 많은 배열을 만들어야함
	char cha[5];
	cha[0] = 'h';
	cha[1] = 'o';
	cha[2] = 'n';
	cha[3] = 'g';
	cha[4] = 'a'; // 문자 하나씩 저장			
	
	for (int i = 0; i < 5; i++)
	{
		printf("%c\n", cha[i]);
	}
	
	//printf("char 크기 : %d\n", sizeof(char));
	//printf("ch[4] : %c\n", cha[4]);
	// 아무것도 출력 안됨
	// printf("ch[4] : %s\n", cha[4]);
	// null 출력됨
	// ch = "hong"; -> error 발생 => 인덱스 사용하여 한글자씩 넣어줘야함
	// 초기화 할때 hong넣어주면 입력됨
	
	//printf("ch[4] : %s\n", ch[4]);

	printf("배열이름 cha: %p\n", ch);
	printf("배열이름 cha: %p\n", &ch);



	return 0;
}