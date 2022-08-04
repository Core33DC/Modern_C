//재귀호출
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void fruit(void); //먼저 함수 선언해주시고요

int main(void)
{
	fruit(); //함수 호출~

	return 0;
}

void fruit(void) //재귀호출 함수 정의
{
	printf("apple\n");
	fruit();  //자신을 다시 호출
}


//실행하면 무한으로 계속 출력되다가 종료되는데 호출만으로도 일정 크기의 메모리를 사용하므로
//무한으로 호출하면 프로그램 하나가 쓸 수 있는 메모리를 모두 사용하여 강제 종료됨.