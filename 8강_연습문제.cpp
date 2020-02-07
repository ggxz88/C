#include <stdio.h>

int main()
{
	/*int days[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //1번
	int i;

	for (i = 0; i < 12; i++)
	{
		printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
	}*/

	int i, j, max, min, sum, students;//2
	int grade[10][3];

	printf("학생수를 입력하시오: ");
	scanf("%d", &students);

	for (i = 0; i < students; i++)
	{ 
		for (j = 0; j < 3; j++)
		{
			printf("학생의 시험 #%d 점수를 입력하시오: ", j+1);
			scanf("%d", &grade[i][j]);
		}
	}

	for (j = 0; j < 3; j++) //2-a
	{
		min = max = grade[0][j];
		sum = 0;
		for (i = 0; i < 10; i++)
		{
			if (grade[i][j] < min) min = grade[i][j];
			if (grade[i][j] > max) max = grade[i][j];
			sum += grade[i][j];
		}

		printf("최대점수: %d\n", max);
		printf("최소점수: %d\n", min);
		printf("평균: %f\n", sum/students);

	}
	

	/*double num[20];//3번
	int i, dnum;
	double aver, dev, sum, dis;
	sum = 0;
	aver = 0;
	dis = 0;

	printf("몇 개의 실수를 입력하시겠습니까?: ");
	scanf("%d", &dnum);

	for (i = 0; i < dnum; i++)
	{
		printf("실수를 입력하시오: ");
		scanf("%lf", &num[i]);
	}
	
	for (i = 0; i < dnum; i++)
	{
		sum += num[i];
		dis += (num[i] - aver) * (num[i] - aver);	
	}

	aver = sum / dnum;
	dev = dis / dnum;

	printf("평균: %lf", aver);
	printf("표준편차: %lf", dev);*/

	/*int num[3][5] = { {12, 56, 32, 16, 98}, //5번
	{99, 56, 34, 41, 3},
	{65, 3, 87, 78, 21} };
	int sum, i, j;

	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 5; j++)
		{
			sum += num[i][j];
		}
		printf("%d 행의 합계: %d\n", i, sum);
	}
	for (j = 0; j < 5; j++)
	{
		sum = 0;
		for (i = 0; i < 3; i++)
		{
			sum += num[i][j];
		}
		printf("%d 열의 합계: %d\n", j, sum);
	}*/

	return 0;
}