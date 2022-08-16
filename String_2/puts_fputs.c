//문자열을 출력하는 puts와 fputs 함수

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";	//배열에 문자열 초기화
	char* ps = "banana";	//포인터에 문자열 연결

	puts(str);	//apple juice 출력하고 줄 바꿈
	fputs(ps, stdout);	//banana만 출력
	puts("milk");	//banana에 이어 milk 출력

	return 0;
}

//실행결과를 보면 apple juice는 puts로 출력하여 출력 후 자동으로 줄이 바뀌었고
//banana는 fputs로 출력하여 banana가 출력된 후에 milk가 바로 이어서 출력 된다.

//puts와 fputs 함수는 문자열의 시작 위치부터 널 문자가 나올 때까지 모든 문자를 출력한다.
//따라서 8행과 같이 char 배열의 배열명이나 9행과 같이 문자열 상수를 연결하고 있는 포인터를 인수로 줄 수 있다.
//물론 14행처럼 문자열 상수를 직접 사용하는 것도 가능하다.

//어떤 경우든 문자열에서 첫 번째 문자의 주소가 되므로 결국 문자열이 출력된다.

//ex 배열명 str -> apple juice 100번째 부터 시작
//포인터 ps -> banana 200번부터
//문자열 상수 -> milk 300번부터

//puts 함수는 fputs 함수와 달리 문자열을 출력한 후에 자동으로 줄을 바꿔주므로 편리하지만
//줄을 바꾸고 싶지 않을때 적당하지 않다.