//배열명과 포인터의 차이

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;	//포인터 선언 후 배열로 초기화를 함
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		//pa[0]
		//*(pa + 0)
		//*pa
		//동일한 의미

		pa++;
		//pa + 1;
		//동일한 의미

		//pa++까지 같이 출력 라인에 넣는다면
		//printf("%d ", *(pa++));
		//주의점으로 포인터에 증가 연산자와 간접 참조 연산자를 함께 사용할 때 전위 표현을 사용하면 안된다.
		//*(++pa)는 pa의 값이 먼저 증가된 후에 증가된 ap가 가리키는 배열 요소를 간접 참조하므로 두번째 배열 요소부터 출력된다.
		//따라서 마지막에 출력되는 값은 배열의 값이 아닌 쓰레기 값이 출력된다.
	}

	return 0;
}

//포인터의 값이 변할 수 있으므로 유효한 값인지 확인하는 습관이 필요하다
//만약 배열을 초기화하지 않고 키보드로 입력한다면 11행 다음에 코드를 추가한다.

//for (i = 0; i < 3; i++)
//{
//	scanf("%d", pa);
//	pa++;
//}



//차이점으로 1. sizeof 연산의 결과가 다름. 2. 변수와 상수의 차이가 있음.

//sizeof(ary) 12바이트, 배열 전체크기
//sizeof(pa) 4바이트, 포인터 하나의 크기

//포인터는 그 값을 바꿀 수 있지만 배열명은 상수이므로 값을 바꿀 수 없다.
//즉 포인터 pa에 1을 더하여 다시 pa에 저장할 수는 있으나, 배열명 ary는 1을 더하는 것은 가능하고 그 값을 저장하는 것은 불가능함.

//포인터는 값을 바꿀 수 있음
//pa = pa + 1
//pa++
//가능함

//배열명은 값을 바꿀 수 없음.
//ary = ary + 1
//ary++
//불가능함