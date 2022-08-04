#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i <= 10; i++)
	{
		sum += i;
		if (sum > 30)
			break; //break를 사용해서 30이 넘게 되면은 break 후에 for문 바깥으로 나감.
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}

//만약 13행 선택제어문 if문이 없다면 1부터 10까지 합을 구함.


//#### if문과 달리 switch ~case문의 블록 안에서 break를 사용하면 switch ~ case 블록만 벗어남.

//무한반복문을 사용할땐 while(1), for(;;)을 사용하면 된다. while(1)같은 경우 무한반복문 break와 같이 쓰므로 잘 기억해두자.
//

//for (i = 1; i <= 100; i++)
//{
//	if ((i % 3) == 0)
//	{
//		continue;
//	}
//	sum += i;
//}

//i가 3의 배수면 sum += i문장을 건너뛰고 블록 끝으로 간 후에 다시 반복한다.
//3의 배수를 빼고 1부터 100까지의 합을 구할 때 효과적으로 사용할 수 있다.


//i = 1;
//while (i <= 100)
//{
//	if ((i % 3) == 0)
//	{
//		continue;
//	}
//	sum += i;
//	i++;
//}

//i가 3일때 증감식 i++를 건너뛰므로 while문의 조건식은 계속 참이 됨. 