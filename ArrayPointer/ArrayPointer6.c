//배열 요소의 개수가 다른 배열도 출력하는 함수

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };	//배열요소가 5개인 배열
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };	//배열요소가 7개

	print_ary(ary1, 5);	//ary1 배열 출력
	printf("\n");
	print_ary(ary2, 7);	//ary2 배열 출력

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)	//size의 값에 따라 반복 횟수 결정
	{
		printf("%d ", pa[i]);
	}
}