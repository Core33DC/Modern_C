//strcmp, strncmp 함수를 사용한 문자열 비교

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy 함수를 사용하기 위해 포함함

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");

	if (strcmp(str1, str2) > 0)
	{
		printf("%s\n", str1);
	}
	else
		printf("%s\n", str2);

	return 0;
}

//strcmp 함수가 작동하는 원리는 우선 첫 문자의 \아스키 코드 값을 비교함.
//첫 문자가 같으면 다음 문자의 아스키 코드 값을 차례로 비교함.
//그래서 대문자 소문자 구분을 잘해야 함 조심!!!

//strncmp 함수는 strcmp 함수와 거의 같지만 비교할 문자 수를 세 번째 인수로 지정할 수 있다.
//즉 pear와 epach의 앞에서부터 3개의 문자만 비교하는 경우 결과로 0을 반환함.

//printf("앞에서 3개의 문자만 비교하면?\n");
//if (strncmp(str1, str2, 3) == 0)
//	printf("같다\n");
//else
//	printf("다르다.\n");

