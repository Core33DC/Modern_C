//간단하게 메모리의 주소를 구해 출력하는 프로그램
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a; //int형 변수
	double b; //double형 변수
	char c; //char형 변수

	printf("int형 변수의 주소 : %u\n", &a);	//주소 연산자로 주소 계산
	printf("double형 변수의 주소 : %u\n", &b);	//주소란 변수가 할당된 메모리 공간의 시작주소를 의미함.
	printf("char형 변수의 주소 : %u\n", &c);	//시작 주소를 알면 그 위치부터 변수의 크기만큼 메모리를 사용할 수 있다.
	//주소는 주소 연산자 &을 사용해서 구함.
	//주소는 음수가 없으므로 %u(unsigned)을 사용해서 구함

	return 0;
}


//포인터란? 간단하게는 메모리의 주소 값을 이용하는 것

