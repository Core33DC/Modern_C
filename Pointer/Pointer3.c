//포인터를 사용한 두 정소의 합과 평균 계산

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;	//변수 선언과 동시에 초기화
	double avg;	//평균을 저장할 변수
	int* pa, * pb;	//포인터 동시선언, 가리키는 자료형이 같은 경우 한번만 사용해도 되는데 만약 *를 붙이지 않는다면 일반 변수가 되므로 조심.
	int* pt = &total;	//포인터 선언과 동시에 초기화, (주소 대입도 함께)
	//int* pt; 포인터 선언
	//pt = &total; 주소를 구해 저장
	//이 부분을 같이 합칠 수도 있음.

	double* pg = &avg;	//double형 포인터 선언과 동시에 초기화, (주소 대입도 함께)
	//double* pg; 포인터 선언
	//pg = &avg; 주소를 구해 저장
	//위에 토탈부분과 함께 이 부분도 같이 합쳐서 라인 하나로만 가능

	pa = &a;	//포인터 pa에 변수 a의 주소 대입
	pb = &b;	//포인터 pb에 변수 b의 주소 대입
	//11행에서 선언한 포인터에 각각 a와 b의 주소를 대입함.

	*pt = *pa + *pb;	//a 값과 b값을 더해 total에 저장
	*pg = *pt / 2.0;	//total 값을 2로 나눈 값을 avg에 저장

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);	//a 값과 b 값 출력
	printf("두 정수의 합 : %d\n", *pt);	//total 값 출력
	printf("두 정수의 평균 :  %.1lf\n", *pg);	//avg 값 출력

	return 0;
}