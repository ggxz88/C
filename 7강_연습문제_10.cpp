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
		printf("1. ����\n");
		printf("2. ����\n");

		printf("���ϴ� �޴��� �����Ͻÿ�\n");
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
			printf("�߸� �����Ͽ����ϴ�.\n");
			break;*/
		if(num==1)
		{
			printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1) ");
			scanf("%d", &amount);
			
			if (amount == -1)
			{
				printf("����\n");
				break;
			}
			else
			{
				save(amount);
			
			}
		}
		else if (num == 2)
		{
			printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1) ");
			scanf("%d", &amount); 

			if (amount == -1)
			{
				printf("����\n");
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

	/*printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1) ");
	scanf("%d", &amount);*/

	//if (amount == -1)
	//{
	//	printf("����\n");
	//}
	//else
	//{
		sum += amount;
		printf("���ݱ��� �� ������� %d�Դϴ�.\n", sum);
	//}
		return sum;
}
int draw(int amount)
{/*
	printf("�󸶸� �����Ͻðڽ��ϱ�?(����� -1) ");
	scanf("%d", &amount);*/

	/*if (amount == -1)
	{
		printf("����\n");
	}
	else
	{*/
		sum -= amount;
		printf("���ݱ��� �� ������� %d�Դϴ�.\n", sum);
	//}
	return sum;
}