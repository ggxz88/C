#include <stdio.h>

int main()
{
	//int x, y; //1��

	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &x);

	//printf("������ �Է��Ͻÿ�:");
	//scanf("%d", &y);

	//printf("�� ���� ���� %d�Դϴ�.\n", x + y);

	//if (x >= y)
	//{
	//	
	//	printf("�� ���� ���� %d�Դϴ�.\n", x - y);
	//}
	//else
	//{
	//	printf("�� ���� ���� %d�Դϴ�.\n", y - x);
	//}

	int income, income_tax; //2��

	printf("���� ǥ���� �Է��Ͻÿ�(����):");
	scanf("%d", &income);

	if (income <= 1000)
	{
		income_tax = income * 0.08;
		//printf("�ҵ漼�� %d�����Դϴ�.", income_tax);
	}
	else if (income > 1000 && income <= 4000)
	{
		income_tax = (1000 * 0.08) + ((income - 1000) * 0.17);
		//printf("�ҵ漼�� %d�����Դϴ�.", income_tax);

	}
	else if (income > 4000 && income <= 8000)
	{
		income_tax = (4000 * 0.17) + (income - 4000) * 0.26;
		//printf("�ҵ漼�� %d�����Դϴ�.", income_tax);
	}
	else
	{
		income_tax = (8000 * 0.35) + (income - 8000) * 0.35;
		
	}

	printf("�ҵ漼�� %d�����Դϴ�.", income_tax);
	/*int mid, fin, average; //3��

	printf("�߰� ��� ������ �Է��Ͻÿ�:");
	scanf("%d", &mid);

	printf("�⸻ ��� ������ �Է��Ͻÿ�:");
	scanf("%d", &fin);

	average = (mid + fin) / 2;

	if(average <=100)
	{
		if (average <= 100 && average >= 90)
		{
			printf("����� ������ A�Դϴ�.");
		}
		else if (average < 90 && average >= 80)
		{
			printf("����� ������ B�Դϴ�.");
		}
		else if (average < 80 && average >= 70)
		{
			printf("����� ������ C�Դϴ�.");
		}
		else if (average < 70 && average >= 60)
		{
			printf("����� ������ D�Դϴ�.");
		}
		else
		{
			printf("����� ������ F�Դϴ�.");
		}
	}
	else
	{
		printf("�ٽ� �Է����ּ���");
	}*/

	/*int price, money, change, Ten, Five, One;

	printf("������ ����: ");
	scanf("%d", &price);

	printf("�����Լ� ���� ȭ��: ");
	scanf("%d", &money);

	Ten = (money - price) / 10000;
	Five = ((money - price) % 10000) / 5000 ;
	One = ((money - price) % 10000) / 1000 - (5000 * Five);

	if (price < money)
	{
		printf("������ ������ �ܵ��� ������ �����ϴ�.\n");
		printf("�� ����: %d��\n", Ten);
		printf("��õ ����: %d��\n", Five);
		printf("õ ����: %d��\n", One);
	}
	else if (price = money)
	{
		printf("������ ������ �ܵ��� �����ϴ�.\n");
	}
	else
		printf("���� ���ڸ��ϴ�.\n");*/

	return 0;
}