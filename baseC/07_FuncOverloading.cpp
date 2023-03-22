#include <iostream>

void func()
{
	std::cout << "func()\n" << std::endl;
}

void func(int a)
{
	std::cout << "func(a)\n" << std::endl;

}

void func(int a, int b)
{
	std::cout << "func(a b)\n" << std::endl;

}


void func(char a)
{
	std::cout << "func(a)\n" << std::endl;

}

int main()
{
	int n = 10;
	int n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}

/* C에서 std::cout -> printf로 바꿔서 실행할 경우 error가 발생함
   C에서는 함수를 찾을 때 함수 이름으로 찾음
   func 함수 이름이 같이 때문에 error가 발생하는 것임
   func, func1로 이름을 다르게 할 경우 error발생 안함


   C++에서는 매개변수의 타입, 개수에 따라 다르게 인식되어 error발생 안함
   출력의 형태는 함수 구분 조건에 해당하지 않음
*/