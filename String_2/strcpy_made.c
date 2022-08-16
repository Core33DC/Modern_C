//strcpy와 기능이 같은 함수의 구현

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy 함수를 사용하기 위해 포함함

char* my_strcpy(char* pd, char* ps);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");	//문자열 "apple" 복사
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));	//반환값으로 출력

	return 0;
}

char* my_strcpy(char* pd, char* ps)	//복사 받을 곳(pd)과 복사할 곳(ps)의 포인터
//매개변수는 복사 받을 곳의 시작 주소를 pd에 받고, 복사할 문자열의 시작 주소를 ps에 받는다.
{
	char* po = pd;	//pd 값을 나중에 반환하기 위해 보관

	while (*ps != '\0')	//ps가 가리키는 문자가 널 문자가 아닌 동안
	{
		*pd = *ps;	//ps가 가리키는 문자를 pd가 가리키는 위치에 대입
		pd++;	//복사받을 다음 위치로 포인터 증가
		ps++;	//복사할 다음 문자의 위치로 포인터 증가
		//포인터를 증가시키면서 ps가 가리키는 문자를 차례로 pd가 가리키는 곳에 저장함.
		//이 과정을 복사할 문자열이 끝날 때까지 반복한다.
	}
	*pd = '\0';	//복사가 모두 끝난 후 복사받을 곳에 널 문자로 마무리
	//이 과정을 생략하면 복사가 끝난 후의 문자열은 appleberry가 되므로 주의해야한다.

	return po;	//복사가 끝난 저장 공간의 시작 주소 반환
}

//100 포인터 pd -> strawberry
//200 포인터 ps -> apple

//105 포인터 pd -> b~
