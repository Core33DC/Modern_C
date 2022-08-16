//strncpy 함수의 사용법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>	//strncpy 함수를 사용하기 위해 포함함

int main(void)
{
	char str[20] = "mango tree";	//배열 초기화

	strncpy(str, "apple-pie", 5);	//"apple-pie"에서 다섯문자만 복사
	//str = 복사받을 배열명
	//apple-pie = 복사할 배열명
	//5 = 복사할 문자 수

	printf("%s\n", str);	//복사 받은 문자열 출력

	return 0;
}

//원하는 개수의 문자만을 복사하는 strncpy 함수
//strncpy 함수는 복사할 문자열에서 지정한 개수만큼 문자를 복사하고 '널 문자는 저장하지 않는다.'
//따라서 str 배열에서 mango에서 apple로 바뀌므로 결국 str 배열에 저장된 문자열은 apple tree가 된다.
//만약 apple로만 쓰이도록 하려면 apple을 복사한 후에 널 문자를 별도로 저장해야 한다.
//즉 16행에 str[5] = '\0';을 추가하면 된다. 