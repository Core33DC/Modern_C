//2차원 배열처럼 활용하는 포인터 배열

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ary1[4] = { 1, 2, 3, 4 };	//1차원 배열의 선언과 초기화
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int* pary[3] = { ary1, ary2, ary3 };	//포인터 배열에 각 배열명 초기화
	int i, j;	//반복 제어변수

	for (i = 0; i < 3; i++)	//3행 반복
	{
		for (j = 0; j < 4; j++)	//4열 반복
		{
			printf("%5d", pary[i][j]);	//2차원 배열처럼 출력
		}
		printf("\n");	//한 행을 출력한 후에 줄 바꿈
	}

	return 0;
}

//포인터 배열을 2차원 배열처럼 사용할 수 있는 이유
//그 이유는 포인터 연산에 있음

//포인터는 자신이 가리키는 변수의 형태를 알고 있으므로 정수 연산을 통해 원하는 위치를 찾아갈 수 있음
//배열표현 : pary[2][2];
//포인터표현 : *(pary[2] + 2);

//pary[2]는 int형 변수를 가리키는 포인터이므로 그곳에 저장된 값 300은 int형 변수의 주소임
//따라서 이 값에 2를 더하면 int형의 크기인 4를 곱해서 더하므로 308이 됨.
//이 값은 ary3배열의 세 번째 요소의 주소가 됨.
//마지막으로 이 값에 간접 참조 연산을 수행하면 그 곳에 저장된 값 23을 사용할 수 있음
// *(pary[2] + 2) -> *(300 + (2 * sizeof(int))) -> *(308)