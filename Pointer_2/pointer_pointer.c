//이중 포인터 개념 (포인터 포인터)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10;	//int형 변수의 선언과 초기화
	int* pi;	//포인터 선언
	int** ppi;	//이중포인터 선언
	//첫번째 별은 ppi가 가리키는 자료형이 포인터임을 뜻하고
	//두번째 별은 ppi 자신이 포인터임을 뜻함

	pi = &a;	//int형 변수의 주소를 저장한 포인터
	ppi = &pi;	//포인터의 주소를 저장한 이중 포인터

	printf("-------------------------------------------\n");
	printf("변수		변수값 			 &연산		  *연산			 **연산\n");
	printf("-------------------------------------------\n");
	printf("  a%20d%20u\n", a, &a);
	printf(" pi%20u%20u%20d\n", pi, &pi, *pi);
	printf("ppi%20u%20u%20u%20u\n", ppi, &ppi, *ppi, **ppi);
	printf("-------------------------------------------\n");

	return 0;
}

//포인터가 가지는 주소값은 처리하려는 데이터가 아니었음. 포인터를 사용하는 목적이 가리키는 데이터를 사용하기 위한 것이었는데
//주소 값 자체를 처리할 데이터로 사용하겠다

//즉, 주소를 저장한 포인터도 하나의 변수고 따라서 그 주소를 구할 수 있고 또 다른 포인터에 저장하고 가리키는 것도 가능함
//쉽게 이야기하면 찾아간 주소 위치에 주소 값이 또 잇다는 말임

//이중포인터의 개념
//포인터도 메모리에 저장 공간을 갖는 하나의 변수
//따라서 주소 연산으로 포인터의 주소도 구할 수 있음

//헷갈리면 p.418 ~ 419의 그림을 보면 이해가 가능함

//규칙 1 포인터를 변수명r-value으로 쓰면 그 안의 값이 됨
//규칙 2 포인터에 & 연산을 하면 포인터 변수의 주소가 됨
//규칙 3 포인터의 * 연산은 화살표를 따라감

//1. pi와 ppi가 변수명으로 사용되어 그 안의 값이 된다.
//2. pi와 ppi에 & 연산을 한 결과는 자신의 주소 값을 의미함
//3. ppi에 * 연산을 하면 ppi가 가리키는 대상 pi를 뜻함
//4. ppi에 ** 연산을 하면 ppi가 가리키는 pi가 가리키는 대상이므로 변수 a가 됨
//
//즉, 이중 포인터 ppi로 변수 a 값을 사용하려면 간접 참조 연산자를 두 번 써야함

//주소와 포인터의 차이
//포인터는 변수이므로 주속 연산자를 사용하여 그 주소를 구할 수 있지만
//상수인 주소에는 주소 연산자를 쓸 수 없음
