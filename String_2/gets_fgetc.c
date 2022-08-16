//개행 문자로 인해 gets 함수가 인력을 못하는 경우

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int age;	//나이를 저장할 변수
	char name[20];	//이름을 저장할 배열

	printf("나이 입력 : ");
	scanf("%d", &age);	//scanf 함수로 나이 입력
	//fgetc(stdin);
	printf("이름 입력 : ");
	gets(name);	//gets 함수로 이름 입력
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}

//이런 식으로 코드를 쓰면 입력한 나이는 문자열로 버퍼에 저장되었다가 scanf 함수가 숫자로 변환하여 변수 age에 저장한다.
//이때 버퍼에 남아 있는 개행 문자가 12행의 gets 함수의 입력으로 쓰인다.
//그러므로 이름을 입력하는 과정이 생략되며 name 배열의 첫 번째 요소에는 널 문자가 저장되어 이름은 아무것도 출력되지 않는다.
//이때 버퍼에 남아있는 개행 문자를 지우는 방법은 간단하다.
//
//1. getchar();		버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//2. scanf("%*c");	버퍼에서 하나의 문자를 읽어서 버림, 변수는 필요 없음
//3. fgetc(stdin);	버퍼에서 하나의 문자를 읽어서 반환, 반환 문자는 버림
//
//이 중에 하나를 14행에 넣으면 된다.