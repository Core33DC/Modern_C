//2차원 배열 선언과 요소 사용 //학생 3명의 네 과목 총점과 평균을 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score[3][4];	//3명의 네 과목 점수를 저장할 2차원 배열 선언
	//		  행 열
	int total;	//총점
	double avg;	//평균
	int i, j;	//반복 제어 변수

	for (i = 0; i < 3; i++)	//학생 수만큼 반복
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)	//과목 수만큼 반복
		{
			scanf("%d", &score[i][j]);	//점수 입력
		}
	}

	for (i = 0; i < 3; i++)	//학생 수만큼 반복
	{
		total = 0;
		for (j = 0; j < 4; j++)	//과목 수만큼 반복
		{
			total += score[i][j];	//학생별로 총점 누적
		}
		avg = total / 4.0;	//평균 계산
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);	//총점, 평균 출력
	}

	return 0;
}

//형태가 같은 배열이 여러 개 필요한 경우 이들을 모아 배열을 만들 수 있음.
//한명의 학생이 4과목 점수를 처리할 때는 요소가 4개인 int형 배열 하나면 되지만 학생 수가 3명으로 늘어나면
//같은 배열이 3개나 더 필요함. -> 이때 2차원 배열로 만들면 더 편하게 관리할 수 있음.

//첫번째 학생의 점수 배열같은 경우 score[0][0], score[0][1], score[0][2], score[0][3] 가 됨
//국어 점수만 배열을 따온다면 score[0][0], score[1][0], score[2][0]

//메모리에서의 2차원배열은 실은 1차원 배열과 같다.
//논리적으로는 행렬의 구조를 가지고 있지만 물리적으로는 1차원 배열의 형태로 메모리에 할당됨.

//행 첨자	1차원 배열로 계산했을 때의 위치 / 열의 수 -> 6 / 4 = 1
//열 첨자	1차원 배열로 계산했을 때의 위치 / 행의 수 -> 6 % 4 = 1