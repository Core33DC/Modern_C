//문자열을 붙이는 strcat, strncat 함수의 사용법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy 함수를 사용하기 위해 포함함

int main(void)
{
	char str[80] = "straw";	//문자열 초기화

	strcat(str, "berry");	//str 배열에 문자열 초기화
	printf("%s\n", str);
	strncat(str, "piece", 3);	//str 배열에 3개의 문자 붙이기
	printf("%s\n", str);

	return 0;
}

//배열에 있는 문자열 뒤에 이어 붙일 때는 strcat 또는 strncat 함수를 사용합니다.
//strcat 함수는 문자열을 이어 붙이며
//strncat 함수는 지정한 문자의 개수만큼 붙입니다.

//strcat 함수는 메모리를 침범할 수 있다. 문자열을 덧붙이는 것이므로 붙여넣기가 되는 배열의 크기가 충분히 커야한다.
//strcat 함수는 사용할 때는 배열을 초기화해야한다.

//char str[80] = {'\0'};	명시적으로 널 문자를 초기화
//char str[80] = {0};		널 문자의 아스키 코드 값으로 초기화
//char str[80] = "";		큰 따옴표 안에 아무것도 없으므로 널 문자만 초기화
//str[0] = '\0';			첫 번째 배열 요소만 별도로 초기화

//다음과 같은 초기화가 모두 가능함.