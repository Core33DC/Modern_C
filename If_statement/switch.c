#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank) //조건식은 정수식만
	{
	case 1:	//기본적으로 case는 break를 포함.
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
}

//선택제어문 중에 switch문
//조건식은 정수식만 사용하고 기본적으로 case는 break를 포함함.

//case와 default는 건너뛸 위치를 표시하는 레이블(label)의 역할을 함.
//break는 필요에 따라 생략가능. 하지만 생략할때는 자세한 설명과 함께 제한적으로 사용해야한다.
//(그냥 break 쓰는게 알아보기도 편하고 그러니 break를 그냥 쓰는게 제일 좋음)
