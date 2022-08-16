//값을 복사해서 전달하는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void add_ten(int a); //-> void를 int로 바꿔주고

int main(void)
{
	int a = 10;

	add_ten(a);	//a 값을 복사하여 전달	// a = add_ten(a); 바꿔준다. 증가한 값을 반환하여 main 함수의 변수 a에 대입
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)	//11행의 a와 다른 독립적인 저장 공간 할당	// void를 int로 바꿔준다. 반환값이 있는 함수로 정의
{
	a = a + 10;	//19행의 매개변수 a에 10을 더한다.
	//return a 를 추가해줌.
}

//함수를 호출할 때 필요한 데이터를 전달하는 가장 일반적인 방법은 값을 복사해서 전달하는 것임.
//이렇게 하면 호출된 함수가 반환된 이후에도 호출한 함수에 있는 변수의 값은 변하지 않는다.

//실행결과는 20이 아니고 10이 나오는데 매개변수 a의 메모리 주소에 저장된 값을 main 함수로 넘겨주지 않아서임.
//따라서 매개변수 a를 증가시켜도 main 함수에 있는 a는 변함이 없음.

//만약 main 함수의 변수 a가 증가하기를 원한다면 add_ten 함수가 증가시킨 값을 반환하여
//main 함수의 a에 다시 대입하는 방법을 사용해야 함.

//int add_ten(int a);
//
//int main(void)
//{
//	int a = 10;
//
//	a = add_ten(a);
//	printf("a : %d\n", a);
//
//	return 0;
//}
//
//int add_ten(int a)
//{
//	a = a + 10;
//	
//	return a;
//}
