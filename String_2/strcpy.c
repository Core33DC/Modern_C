//strcpy 함수의 사용법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strcpy 함수를 사용하기 위해 포함함

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";	//포인터로 문자열 상수 연결
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");	//문자열 상수 사용
	printf("바뀐 문자열 : %s\n", str1);
	//여기서 두번째 인수는 다양한 값을 사용할 수 있지만 첫 번째 인수는 사용할 수 있는 값은 제한적이다.
	
	//! 중요 첫 번째 인수는 char 배열이나 배열명을 저장한 포인터만 사용할 수 있다.
	//! 중요 두 번째 인수는 문자열의 시작 위치를 알 수 있다면 어떤 것이든 사용할 수 있다.
	return 0;

}


//문자열을 대입할때 다른 문자열로 바꾸는 것은 문자를 하나씩 옮겨야 하는 번거로움이 있다.
//를 들ㅇ어 strawberry가 저장된 배열을 apple로 바꾸려면
//char str1[80] = "strawberry";
//str1[0] = 'a'
//str1[1] = 'p'
//str1[2] = 'p'
//str1[3] = 'l'
//str1[4] = 'e'
//str1[5] = '\0'
//이렇게 해주어야 하는데 여간 번거로우니 strcpy 함수를 사용하는데
//strcpy(str1, str2)을 사용해주면 된다.
//str1 -> str2
//str1은 복사받을 곳, str2 복사할 내용을 적으면 된다. 

