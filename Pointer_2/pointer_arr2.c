//배열 요소의 주소와 배열의 주소	//주소로 쓰이는 배열명과 배열의 주소 비교

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ary[5];

	printf(" ary의 값 : %u\t", ary);	//주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary);	//배열의 주소
	printf(" ary + 1 : %u\t", ary + 1);
	printf("&ary + 1 : %u\n", &ary + 1);

	return 0;
}

//ary 자체가 주소로 쓰일 때는 첫 번째 요소를 가리키므로 가리키는 대상의 크기는 4임
//반면 배열의 주소 &ary는 '배열 전체'를 가리키므로 가리키는 대상의 크기는 20임 ( 4 * 5 = 20, 배열이 5개이기 때문에 5를 곱함)

//sizeof 연산자 사용
//sizeof(ary)	-> 배열 전체의 크기 계산
//
//주소 연산자 사용
//&ary	-> 배열 전체의 시작 주소, 배열 전체를 가리키는 주소

//배열의 정수 연산
//ary + 1 -> 0000100 + (1 * sizeof(ary[0])) -> 0000100 + (1 * 4) -> 0000104
//
//배열의 주소에 정수 연산
//&ary + 1 -> 0000100 + (1 * sizeof(ary)) -> 0000100 + (1 * 20) -> 0000120

//1차원 배열에서 배열의 주소를 구하고 정수를 더하는 연산은 가능하다.
//그러나 배열의 주소에 정수를 더하면 배열이 할당된 메모리 영역을 벗어나므로 특별한 경우가 아니면 사용하지 않음