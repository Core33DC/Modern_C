//포인터 배열 선언과 사용

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char* pary[5];	//포인터 배열 선언 pointer + array -> pary
	int i;

	pary[0] = "dog";
	pary[1] = "cat";
	pary[2] = "tiger";
	pary[3] = "rion";
	pary[4] = "man";
	//5개가 모두 포인터
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}

//생일날 같은 반 친구들에게 초대장을 직접 보낸다면 주소록에서 같은 반 친구들의 주소만 골라내야 한다.
//같은 반 친구들의 주소를 따로 모아 적었다면 한 번에 쉽게 초대장을 보낼 수 있다.
//이처럼 처리할 데이터가 여기저기 흩어져 있더라도 그 주소만 따로 모아놓으면 반복문으로 모든 데이터를 쉽게 처리 가능하다.
//이때 '포인터 배열'이 필요함.

//포인터는 주소를 저장하는 특별한 용도로 쓰이지만, 일반 변수처럼 메모리에 저장 공간을 갖는 변수임.
//따라서 같은 포인터가 많이 필요한 경우 배열을 사용하는 것이 좋다.
//포인터 배열은 같은 자료형의 포인터를 모아 만든 배열임.

//형태가 같은 포인터 3개 -> 포인터 배열로 표현 가능
//int* pa;
//int* pb;				->		int* pary[3];
//int* pc;

//형태가 같은 포인터 3개를 -> 포인터 배열로 표현 가능
//int* pary[3];

//포인터 배열의 초기화는
//
//char 포인터 배열의 초기화
//char* pary[5] = { "dog", "cat", "tiger", "lion", "wolf" };
//
//2차원 char 배열의 초기화
//char animal[5][20] = { "dog", "cat", "tiger", "lion", "wolf" };