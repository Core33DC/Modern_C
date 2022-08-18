//포인터 값을 바꾸는 함수의 매개변수	//이중포인터를 사용한 포인터 교환

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);	//매개변수로 이중 포인터 사용

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);	//바꾸기 전
	swap_ptr(&pa, &pb);	//pa, pb의 주소를 인수로 주고 함수 호출
	printf("pa -> %s, pb -> %s\n", pa, pb);	//바꾼 후

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

//중요한 점으로 문자열을 바꿔 출력하지만 문자열 자체를 바꾸지 않는 거라는 점
//문자열을 연결하는 포인터의 값을 바꾸면 연결 상태가 바뀌므로
//이 후에 포인터를 사용하면 마치 문자열을 바꾼 것처럼 사용할 수 있음

//p.423 ~ 424 그림 참고