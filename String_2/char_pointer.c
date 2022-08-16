//char 포인터로 문자열 사용

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char* dessert = "apple";	//포인터에 문자열 초기화
	//char 포인터를 선언하고 문자열 상수로 초기화한다. 문자열은 컴파일 과정에서 별도로 보관하고
	//첫 번째 문자의 주소로 바뀌므로 결국 포인터에는 문자열의 시작 위치 값만 저장됨.
	//하지만 포인터 연산을 통해 얼마든지 해당 문자열 전체를 사용할 수 있음.

	printf("오늘 후식은 %s입니다.\n", dessert);	//문자열 출력
	dessert = "banana";	//새로운 문자열 대입
	printf("내일 후식은 %s입니다.\n", dessert);	//바뀐 문자열 출력

	return 0;
}
