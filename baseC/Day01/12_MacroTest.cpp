#include <iostream>

#define SUM(x, y)	x + y // 매크로 함수 // Ctrl+d 해당 줄 복, 붙 됨
#define SQUARE(x)	x * x
#define SQUARE1(x)	(x) * (x)
// 일반 함수는 main 함수에서 만나면 해당 함수로 넘어가서 실행한 후 다시 main함수로 넘어옴
// 매크로 함수는 main 함수 내에서 바로 실행됨
// 매크로 함수 -> 자료형 필요 없음

void func()
{

}

int main()
{

	std::cout << SUM(10, 20) << std::endl;
	std::cout << SQUARE(10) << std::endl;
	std::cout << SQUARE(10+1) << std::endl;
	// 10 + 1 * 10 + 1로 결과값이 21 나옴
	std::cout << SQUARE1(10+1) << std::endl;
	// (10+1) * (10+1) -> 11 * 11 값이 나옴
	return 0;
}