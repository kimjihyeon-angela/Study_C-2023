#include <iostream>

int main(void)  // 함수 머리 , void -> 함수 출력, main -> 함수 이름, ()-> 함수 입력(입력에 있는 void는 생략많이 함) => 함수 : 출력, 이름, 입력
// datatype -> 정수타입 : int, 문자타입 : char, 실수 : double, float, 문자열 : string, char의 배열형태로 사용
{			   // 함수 시작 (함수 몸체)
	int num = 20;
	// 변수 선언 -> 지역변수(중괄호{}안에서 선언되었기때문) -> 중괄호가 끝나면 소멸됨
	// num 변수의 크기 : int형 크기 -> 일반적으로 4바이트(컴파일러마다 조금씩 다름)
	std::cout << "Hello World!" << std::endl;
	// std -> namespace 
	// cout -> c out(씨아웃) -> 출력과 관련됨 / 입력과 관련된것 => cin
	// endl -> end line -> new line
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0; // 리턴
// 함수 머리, 함수시작을 알리는 부분을 void로 시작할 경우 return 0-> error가 발생함
}			  // 함수 끝