#include <stdio.h>

int main()
{
	/*int i; //1번

	for (i = 3; i <= 100; i += 3)
	{
		printf("%d\n", i);
	}*/

	/*int i; //2번

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}
		
	}*/

	//int x, y, num; //5번

	//printf("정수를 입력하시오: ");
	//scanf("%d", &num);

	//for (x = 1; x <= num; x++)
	//{
	//	for (y = 1; y <= x; y++)
	//	{
	//		printf("%d ", y);
	//	}
	//	printf("\n");
	//}

	//int x, y , min; //6번 

	//x = 1;

	//printf("데이터를 입력하시오(음수를 입력하면 종료): ");
	//scanf("%d", &y);

	//if (y < 0) 
	//{
	//	printf("다시 입력하시오:\n");
	//	y = 0;
	//}

	//while (x >= 0)
	//{
	//	printf("데이터를 입력하시오(음수를 입력하면 종료): ");
	//	scanf("%d", &x);


	//	if (x >= 0 && x < 10000)
	//	{

	//		min = (x < y) ? x : y;
	//	}
	//	else
	//	{
	//		printf("최솟값은 %d입니다.", min);
	//	}
	//}

	int num, x, y;//7

	x = 1;

	/*for (x = 1; x <= 10; x++)*/
	while(x <= 10)
	{
		printf("막대 #%d의 높이: ", x);
		scanf("%d", &num);

		if (num >= 1 && num <= 50)
		{
			for (y = 1; y <= num; y++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			printf("숫자를 다시 입력하시오\n");
		}
	}
		
	/*int x, y; //10번 모름
	 
	for (x = 1; x <= 100; x++)
	{
		for (y = 2; y <= x; y++)
		{
			if (x % y == 0)
			{
				if (x > y)
					break;
				else
					printf("%d\n", x);
			}
		}
	}*/

	return 0;

}