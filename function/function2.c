//매개 변수가 없는 함수
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_num(void); //먼저 함수선언

int main(void)
{
	int result;

	result = get_num(); //함수 호출 후 반환값은 result에 저장
	//여기서 중요한 점은 get_num함수는 매개변수가 없다. 그렇다고 get_num 이나 get_num(void)로 함수 호출을 할 수 없다.
	//void는 '함수 정의나 선언에서만 사용'하고 호출할때는 쓰지 않음.
	//그러므로 괄호만 쓰면 됨. 만약 괄호조차 없다면 함수를 호출하는 문장이 아닌
	//그냥 함수의 이름으로 인식하므로 반드시 괄호는 사용해야 한다.
	printf("반환값 : %d\n", result); //반환값 출력

	return 0;
}

int get_num(void) //매개변수는 없고 반환형만 있따. 
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}

//매개변수 없는 함수를 표시할때 void를 넣지않고 괄호만 사용하는 것도 가능하지만
//void를 넣어 매개변수가 없음을 명시적으로 표현하는게 좋음

//만약 음수입력이 일어날 때 따로 경고메세지를 주고 싶다면 다음 코딩으로 추가해줌

//int get_num(void)
//{
//	int num;
//
//	printf("양수 입력 : ");
//	scanf("%d", &num);
//
//	while (num < 0)
//	{
//		printf("양수를 입력하세요\n");
//		printf("양수 입력 :");
//		scanf("%d", &num);
//	}
//	
//	return num;
//}

