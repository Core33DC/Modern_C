//이중 포인터 개념 (포인터 포인터)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------\n");
	printf("변수 변수값 &연산 *연산 **연산\n");
	printf("--------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------\n");

	return 0;
}