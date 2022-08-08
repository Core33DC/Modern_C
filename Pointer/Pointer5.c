//주소와 포인터의 크기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch)); //8
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));  //8
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));  //8
	//변수 자체의 크기는 다르지만 주소의 크기는 같음

	printf("char * 포인터의 크기 : %d\n", sizeof(pc));  //8
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));  //8
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));  //8
	//포인터도 가리키는 자료형과 상관없이 모두 크기가 같음

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));  //1
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));  //4
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));  //8

	return 0;
}



//포인터는 주소를 저장하는 일정한 크기의 메모리 공간이다
//그리고 언제든지 다른 주소를 저장하거나 '포인터끼리 대입할 수 있음'


// '주소'와 '포인터'의 차이!

//주소는 변수에 할당된 메모리 저장 공간의 시작 주소 값 자체

//포인터는 그 값을 저장하는 또 다른 메모리 공간
//따라서 특정 변수의 주소 값은 바뀌지 않지만 포인터는 다른 주소를 대입하여 그 값을 바꿀 수 있음
//주소는 상수 포인터는 변수