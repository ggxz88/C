//#include <stdio.h> //7강 예제
//
//long factorial(int n);
//
//int main()
//{
//	int x = 0;
//	long f;
//
//	printf("정수를 입력하시오:");
//	scanf("%d", &x);
//
//	f = factorial(x);
//	printf("%d!은 %d입니다.\n", x, f);
//
//	return 0;
//}
//long factorial(int n)
//{
//	printf("factorial(%d)\n", n);
//
//	if (n <= 1) return 1;
//	else return n * factorial(n - 1);
//}
//#include <stdio.h>
//
//int main()
//{
//	int i;
//	int grade[5];
//
//	grade[0] = 10;
//	grade[1] = 20;
//	grade[2] = 30;
//	grade[3] = 40;
//	grade[4] = 50;
//	;
//	for (i = 0; i < 5; i++)
//		printf("grade[%d]=%d\n", i, grade[i]);
//
//	return 0;
//}

// 
//#include<stdio.h>
//int main()
//{
//	int grade[5] = { 31, 63/*, 62, 87, 14 */};
//	int i;
//
//	for (i = 0; i < 5; i++)
//		printf("grade[%d] = %d\n", i, grade[i]);
//
//	return 0;
//}
//#include<stdio.h> // 최소값, 최댓값
//   #define SIZE 5
//
//int main()
//{
//	int grade[SIZE];
//	int i, /*min*/max;
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("성적을 입력하시오: ");
//		scanf("%d", &grade[i]);
//	}
//
//	/*min*/max = grade[0];
//	
//	for (i = 1; i < SIZE; i++)
//	{
//		if (grade[i] /*<*/> /*min*/max)
//			/*min*/max = grade[i];
//	}
//
//	printf("최솟값은 %d입니다.\n", /*min*/max);
//
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int s[3][5];
//	int i, j;
//	int value = 0;
//
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 5; j++)
//			s[i][j] = value++;
//
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 5; j++)
//			printf("%d\n", s[i][j]);
//
//	return 0;
//}

#include<stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
	int A[ROWS][COLS] = { {2,3,0},
	{8,9,1}, {7,0,5} };
	int B[ROWS][COLS] = { { 1,0,0 },
		{1,0,0},{1,0,0} };
	int C[ROWS][COLS];
	int r, c;

	for (r = 0; r < ROWS; r++)
		for (c = 0; c < COLS; c++)
			c[r][c] = A[r][c] + B[r][c];

	for (r = 0; r < ROWS; r++)
	{
		for (c = 0; c < COLS; c++)
			printf("%d", C[r][c]);
		printf("\n");

	}

	return 0;