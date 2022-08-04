#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 1; //변수를 선언하고 1로 초기화
	
	do //반복문 시작 위치
	{
		a = a * 2; //a의 값을 2배로 늘린다.
	} while (a < 10); //반복조건

	printf("a : %d\n", a);

	return 0;
}

//do ~while문은 조건식과 관계없이 반복할 문장을 최소 한 번은 실행합니다.

//while문은 반복 문장을 실행하기 전에 반복 조건을 먼저 검사한다. 
//for문은 반복 횟수가 정해진 경우 사용하면 편리하다.
//do ~while문은 반복 문장을 실행한 후에 반복 조건을 검사한다.