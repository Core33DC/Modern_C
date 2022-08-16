//fgets 함수를 사용한 문자열 입력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	//fgets(str = 배열명, sizeof(str) = 배열의 크기 확인, stdin = 표준 입력);
	//첫번째 인수는 배열명, 두번째 인수는 배열의 크기 확인, 세번째 인수는 표준 입력
	//입력한 문자열의 끝에는 항상 널 문자를 붙으므로 최대로 배열의 크기 - 1개의 문자만을 저장함
	str[strlen(str) - 1] = '\0';
	//fgets는 버퍼에 있는 개행 문자도 배열에 저장하고 널 문자를 붙여 문자열을 완성한다.
	//그래서 개행 문자를 제거해야 하는데 입력된 개행 문자가 불필요하면 17번 라인처럼 사용하여 제거한다.
	//제거안하면 apple jam 출력이후 개행 후 '입니다'가 출력됨.
	//이해가 안되면 p.328 보기
	//strlen 함수는 배열명을 인수로 받아 널 문자 이전까지의 문자 수를 세어 반환함.
	//사용할때 string.h 헤더 파일을 인클루드하여 사용함
	printf("입력된 문자열은 %s입니다.\n", str);
	


	return 0;
}

//scanf 함수와 gets 함수는 입력되는 문자열의 크기가 배열 크기를 넘어설 위험성이 있음
//이렇게 되버리면 할당되지 않은 메모리 공간을 침범해서 실행 중인 프로그램에 에러가 발생 할 수 있다.
//안전하게 문자열을 입력하려면 배열 크기를 확인하는 fgets 함수를 사용하는 것이 좋다.
//fgets 함수는 최대 배열의 크기까지만 문자열을 입력하기 때문이다.