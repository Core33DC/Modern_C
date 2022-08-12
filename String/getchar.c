//getchar 함수를 사용한 문자열 입력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void my_gets(char* str, int size);

int main(void)
{
	char str[7];	//문자열을 저장할 배열

	my_gets(str, sizeof(str));	//한 줄의 문자열을 입력하는 함수
	//함수를 호출하는 부분이며 문자열을 저장할 배열명과 배열의 크기를 인수로 줍니다.
	printf("입력한 문자열 : %s\n", str);	//입력한 문자열 출력

	return 0;
}

void my_gets(char* str, int size)	//str은 char 배열, size는 배열의 크기
{
	int ch;	//getchar 함수의 반환값을 저장할 변수
	int i = 0;	//str 배열의 첨자

	ch = getchar();	//첫 번째 문자 입력
	//최초로 문자를 입력하는데 이때 키보드로 한 줄의 데이터를 모두 입력하여 버퍼에 저장합니다.
	//이후 getchar 함수를 반복 사용하여 버퍼로부터 문자를 하나씩 가져와 배열에 차례로 저장합니다.
	while ((ch != '\n') && (i < size - 1))	//배열의 크기만큼 입력
	{
		str[i] = ch;	//입력한 문자를 배열에 저장
		i++;	//첨자 증가
		ch = getchar();	//새로운 문자 입력
	}
	str[i] = '\0';	//입력된 문자열의 끝에 널 문자(\0)를 저장
}

// 배열의 크기가 7이니 만약 Be happy!를 입력하면 Be hap까지만 입력되는데 이유는 끝에 널 문자 배열 하나를 쓰기 때문이다.
