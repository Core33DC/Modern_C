//입력 버퍼 지우기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();	//버퍼에 남아있는 개행 문자 제거
	//학번을 입력하고 enter를 누르면 학번과 함께 개행 문자가 함께 버퍼에 저장된다.
	//그 후 문자열 학번은 정수로 변환되어 변수 num에 저장되고 버퍼에는 개행문자가 남게 된다.
	//그래서 이 개행 문자가 이후의 입력에 영향을 줄 수 있으므로 9행과 같이 getchar 함수를 추가로 호출하여
	//버퍼에 남아 있던 개행 문자를 제거해 줍니다.


	printf("학점 입력 : ");
	grade = getchar();	//학점 입력
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}