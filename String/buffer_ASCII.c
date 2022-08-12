//scanf 함수 반환값 활용

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int res;	//scanf 함수의 반환값을 저장할 변수
	char ch;	//문자를 입력할 변수

	while (1)
	{
		res = scanf("%c", &ch);	//문자 입력, ctrl + z를 누르면 -1를 반환
		if (res == -1)	//-1 대신 EOF써도 되는데 EOF는 End Of File의 뜻으로
						//-1 대신에 입력의 끝을 의미하는 이름으로 사용하면 좀 더 읽기 쉬운 코드를 작성할 수 있다.
		{
			break;	//반환값이 -1이면 반복 종료
		}
		printf("%d ", ch);	//입력된 문자의 아스키 코드 값 출력
	}

	return 0;
}

//실행결과가 마지막에 10이 나올텐데 10은 아스키 코드 값으로 '\n'(개행)이므로 당연히 나온다. 