#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 10;

	if (a > 10)  //조건식
	{
		b = a;  //실행문
	}  //if문은 중괄호 ({})를 사용. 실행문을 명확히 구분하는게 좋음
		//실행할 문장이 두문장 이상이면 반드시 중괄호로 묶어야 한다.
		//이 if문은 한문장이지만 중괄호를 사용하였음 이때는 굳이 중괄호를 사용하지 않아도 됨.


	printf("a : %d, b : %d\n", a, b);

	return 0;
}

// 제어문 중에 크게 선택문, 반복문, 분기문이 있는데
// 그 중에 선택문의 if문을 사용.