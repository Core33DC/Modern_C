//2차원 배열 초기화	//2차원 char 배열에 동물 이름을 초기화하는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char animal1[5][20] = {
		{'d', 'o', 'g', '\0'},
		{'t', 'i', 'g', 'e', 'r', '\0'},
		{'c', 'a', 't', '\0'},
		{'r', 'i', 'o', 'n', '\0'},
		{'m', 'a', 'n', '\0'}
	};

	char animal2[][10] = { "dog", "tiger", "cat", "rion", "man" };
	int i;
			
	//		배열전체의 크기  부분배열 하나의 크기
	for (i = 0; i < 5; i++)
	{
		printf("%s	", animal1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%s	", animal2[i]);
	}

	return 0;
}

//2차원 char 배열은 char형 변수들의 집합이므로 기본적으로 각 공간을 문자 상수로 초기화할 수 있음
//이렇게 하면 진짜 존나 시간도 많이 걸리고 불편함 시발

//그래서 2차원 char 배열은 1차원 char 배열을 요소로 가지므로 각 행이 되는 1차원 char 배열을 '문자열'로 초기화 가능함. 오오 문자열 오오
//
//char animal1[10] = "dog";
//char animal2[10] = "gier";
//char animal3[10] = "dasf";
//char animal4[10] = "ddsfh";
//char animal5[10] = "drgegg";

//위의 1차원 char 배열 5개를 2차원 char 배열로 선언하고 초기화하면 다음과 같이 할 수 있음.
//char animal2[][10] = { "dog", "asdf", "qwef", "adfhg", "asdfef" };