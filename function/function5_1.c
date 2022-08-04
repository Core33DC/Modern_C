//재귀호출 3번만
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fruit(int count); //먼저 함수 선언해주시고요 //3번만 할거니깐 매개변수 추가해주시고요

int main(void)
{
	fruit(1); //함수 호출~

	return 0;
}

void fruit(int count) //재귀호출 함수 정의
{
	printf("apple\n");
	if (count == 3) //이렇게 if문을 사용하면 호출 횟수를 원하는 만큼 조절 가능
		return;
	fruit(count + 1);  //자신을 다시 호출
}