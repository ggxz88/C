#include <stdio.h>

int main()
{
	/*int i; //1��

	for (i = 3; i <= 100; i += 3)
	{
		printf("%d\n", i);
	}*/

	/*int i; //2��

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%d\n", i);
		}
		
	}*/

	//int x, y, num; //5��

	//printf("������ �Է��Ͻÿ�: ");
	//scanf("%d", &num);

	//for (x = 1; x <= num; x++)
	//{
	//	for (y = 1; y <= x; y++)
	//	{
	//		printf("%d ", y);
	//	}
	//	printf("\n");
	//}

	//int x, y , min; //6�� 

	//x = 1;

	//printf("�����͸� �Է��Ͻÿ�(������ �Է��ϸ� ����): ");
	//scanf("%d", &y);

	//if (y < 0) 
	//{
	//	printf("�ٽ� �Է��Ͻÿ�:\n");
	//	y = 0;
	//}

	//while (x >= 0)
	//{
	//	printf("�����͸� �Է��Ͻÿ�(������ �Է��ϸ� ����): ");
	//	scanf("%d", &x);


	//	if (x >= 0 && x < 10000)
	//	{

	//		min = (x < y) ? x : y;
	//	}
	//	else
	//	{
	//		printf("�ּڰ��� %d�Դϴ�.", min);
	//	}
	//}

	int num, x, y;//7

	x = 1;

	/*for (x = 1; x <= 10; x++)*/
	while(x <= 10)
	{
		printf("���� #%d�� ����: ", x);
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
			printf("���ڸ� �ٽ� �Է��Ͻÿ�\n");
		}
	}
		
	/*int x, y; //10�� ��
	 
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