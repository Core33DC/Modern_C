//2차원 배열	//여러 개의 동물 이름을 입출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char animal[5][20];
	//5개의 동물 이름을 저장하려면 2차원 char 배열이 필요함. 5개의 문자열을 저장해야 하므로 행의 수는 5행이며
	//열의 수는 가장 긴 동물 이름도 저장할 수 있도록 넉넉하게 선언함
	//각 행은 하나의 1차원 char 배열이며 부분배열명이 각 행의 배열명의 기능을 함.
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);	//행의 수를 계산식으로 구함
	//		배열전체의 크기  부분배열 하나의 크기
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s	", animal[i]);
	}

	return 0;
}

//여러 개의 문자열을 저장하려면 1차원 char 배열이 여러개 필요함.
//이때 1차원 char 배열을 모아 새로운 배열을 만드는 것이 효율적임.
