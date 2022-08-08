//포인터를 사용한 두 변수의 값 교환 // 포인터를 사용하는 이유!!

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;	//변수의 호출과 동시에 함수의 선언

	swap(&a, &b);	//a, b의 주소를 인수로 주고 함수 호출
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)	//매개변수로 포인터 선언
{
	int temp;	//교환을 위한 임시 변수

	temp = *pa;	//temp에 pa가 가리키는 변수의 값 저장  temp = 10
	*pa = *pb;	//pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장 b=20 -> a=20
	*pb = temp;	//pb가 가리키는 변수에 temp 값 저장 temp=10 -> b=10
}

//1.임베디드 프로그래밍을 할 때 메모리에 직접 접근하는 경우나
//2.동적할당한 메모리를 사용하는 경우에 포인터가 필요.

//교환작접은 swap 함수 안에서 포인터를 통해 진행되지만 실제로 바뀌는 값은 main 함수의 변수 a와 b가 된다.