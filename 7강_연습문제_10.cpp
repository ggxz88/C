#include <stdio.h>

int amount = 0;
static int sum = 0;

int save(int amount);
int draw(int amount);

int main()
{
	int num;

	while (1)
	{
		printf("1. 저축\n");
		printf("2. 인출\n");

		printf("원하는 메뉴를 선택하시오\n");
		scanf("%d", &num);

		/*switch (num)
		{
		case 1:
			save(amount);
			break;
		case 2:
			draw(amount);
			break;
		default:
			printf("잘못 선택하였습니다.\n");
			break;*/
		if(num==1)
		{
			printf("얼마를 저축하시겠습니까?(종료는 -1) ");
			scanf("%d", &amount);
			
			if (amount == -1)
			{
				printf("종료\n");
				break;
			}
			else
			{
				save(amount);
			
			}
		}
		else if (num == 2)
		{
			printf("얼마를 인출하시겠습니까?(종료는 -1) ");
			scanf("%d", &amount); 

			if (amount == -1)
			{
				printf("종료\n");
				break;
			}
			else
			{
				draw(amount);

			}
		}
	}

	return 0;
}
int save(int amount)
{

	/*printf("얼마를 저축하시겠습니까?(종료는 -1) ");
	scanf("%d", &amount);*/

	//if (amount == -1)
	//{
	//	printf("종료\n");
	//}
	//else
	//{
		sum += amount;
		printf("지금까지 총 저축액은 %d입니다.\n", sum);
	//}
		return sum;
}
int draw(int amount)
{/*
	printf("얼마를 인출하시겠습니까?(종료는 -1) ");
	scanf("%d", &amount);*/

	/*if (amount == -1)
	{
		printf("종료\n");
	}
	else
	{*/
		sum -= amount;
		printf("지금까지 총 저축액은 %d입니다.\n", sum);
	//}
	return sum;
}