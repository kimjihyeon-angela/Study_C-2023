#include <iostream>
int main()
{
	int val1, val2;
	int result = 0;
	// result -> 초기화 안해주면 error 발생함
	// 누적되는 기능을 가진 변수는 초기화해주어야함 -> 처음에 어떤 값이 들어가는지 모르기 때문에
	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	
	std::cout << "두 수 사이의 정수 합 : " << result << std::endl;

	return 0;
}