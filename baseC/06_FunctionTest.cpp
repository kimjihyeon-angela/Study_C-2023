#include <iostream>
/*
int main()
{
	
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
	

	return 0;
}

// 입력과 출력이 없는 함수
void func(void)
{
	int a = 10;
	int b = 20;
	int res;

	res = a + b;
	std::cout << "res : " << res << std::endl;

}


// 입력이 있는 함수
void func(int n1, int n2) // 매개 변수를 선언해 줘야 함
{
	int	res;
	
	res = n1 + n2;
	// int res = n1 + n2;
	std::cout << "res : " << res << std::endl;
}
*/

// 입력과 출력이 있는 함수
int func(int n1, int n2);  // 함수 선언 

int main()
{
	int num1 = 10;
	int num2 = 20;

	int res = func(num1, num2); // 함수 호출, return 되는 값을 호출해야함

	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << func(num1, num2) << std::endl;

	return 0;
}

// 함수정의
int func(int n1, int n2)
{
	int res;
	
	res = n1 + n2;
	return res;
	// 출력은 return문으로 작성
}