//반환값이 없는 함수
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_char(char ch, int count); //매개변수 char ch, int count는 있지만 반환값이 없음(void)

int main(void)
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return; //반환값이 없으므로 return문은 값없이 단독으로 사용함.
	//return의 역할은 값을 돌려주는 일인데, 돌려줄 값이 없으므로 혼자 쓰임
	//또는 return문 자체를 생략하는 것도 가능함.
}