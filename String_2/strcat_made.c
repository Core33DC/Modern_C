//strcat와 기능이 같은 함수의 구현

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy 함수를 사용하기 위해 포함함

char* my_strcat(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcat(str, "apple");	//문자열 "apple" 복사
	printf("더한 후 문자열 : %s\n", str);	//strawberry + apple 
	//100부터 시작하는 strawberry 에서 111의 '\0' 부터 apple을 대입한다.
	printf("다른 문자열 대입 : %s\n", my_strcat(str, "kiwi"));	//반환값으로 출력
	//116의 '\0'부터 kiwi를 대입
	return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd;	//배열의 처음 위치 보관

	while (*pd != '\0')	//pd를 널 문자의 위치로 이동
	{
		pd++;
	}
	while (*ps != '\0')	//여기부터는 문자열 복사와 같다.
	{
		*pd = *ps;
		pd++;
		ps++;
	}

	*pd = '\0';	//복사가 모두 끝난 후 복사 받을 곳에 널 문자로 마무리
	return po;	//붙여넣은 배열의 시작 위치 반환
}

//strcpy 함수에서 문자열을 복사 받는 곳은 배열이어야 한다.
//strcat 함수로 문자열을 최초로 붙을 때는 초기화를 해야 한다.
//배열에 저장된 실제 문자열의 길이를 알고 싶을 때 strlen 함수를 쓴다.
//strcmp 함수로 문자열의 사전 등록 순서를 확인할 수 있다.

//연산기능		사용방법				실행결과

//대입			strcpy(str1, str2);		문자열 str2를 str1에 복사
//길이 계산		strlen(str);			문자열 str의 길이(문자 수)를 구해 반환
//붙이기		strcat(str1, str2);		문자열 str2를 str1 문자열 뒤에 이어 붙임
//비교			strcmp(str1, str2);		문자열 str1이 str2보다 크면 1 반환
//										문자열 str1이 str2보다 작으면 -1 반환
//										str1과 str2가 같은 문자열이면 0 반환