//허용되지 않는 포인터의 대입

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}

//1.포인터는 가리키는 변수의 형태가 같을 때만 대입해야함.
//2.다르다면은 형 변환을 사용하여 포인터의 대입이 가능하다.

//실행결과가 이상하게 나오는데 변수 a의 영역만 사용해야 하는데 double *pd가 사용되는 영역까지 되어서 바꿔줘야 함

//double a = 3.4;
//double* pd = &a;
//int* pi;
//pi = (int*)pd; 이렇게 바꿔주면 됨.