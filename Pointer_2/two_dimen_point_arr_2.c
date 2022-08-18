//2차원 배열의 갑을 출력하는 함수

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_ary(int(*)[4]);

int main(void)
{
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

	print_ary(ary);	//배열명을 인수로 주고 함수 호출

	return 0;
}

void print_ary(int(*pa)[4])	//매개변수는 배열 포인터
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);	//pa를 2차원 배열처럼 사용
		}
		printf("\n");
	}
}

//13행에서 print_ary 함수를 호출할 때 2차원 배열명을 인수로 주면 함수에는 첫 번째 부분배열의 주소가 전달됨
//따라서 이 값을 저장하기 위한 매개변수로 배열 포인터를 선언해야 함
//함수가 호출된 후에는 26행처럼 함수 안에서 매개변수 pa를 배열처럼 사용하여 2차원 배열의 값을 출력함

//p.432 ~ 434 읽어보면 더욱 이해하기 쉬움

//2차원 배열의 배열명은 첫 번째 부분배열의 주소가 된다.