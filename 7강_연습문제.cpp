#include <stdio.h>
#include <math.h>

//void get_divisor(int n); //1��
//
//int main() 
//{
//	int n;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	get_divisor(n);
//
//	return 0;
//}
//void get_divisor(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//double dist_2d(int x1, int x2, int y1, int y2); //4��
//
//int main()
//{
//	int x1, x2, y1, y2;
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(ù ��° x): ");
//	scanf("%d", &x1);
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(ù ��° y): ");
//	scanf("%d", &y1);
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(�� ��° x): ");
//	scanf("%d", &x2);
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(�� ��° y): ");
//	scanf("%d", &y2);
//
//	dist_2d(x1, x2, y1, y2);
//
//	return 0;
//}
//double dist_2d(int x1, int x2, int y1, int y2)
//{
//	double r, d;
//
//	r = ((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2));
//
//	d = sqrt(r);
//
//	printf("�� �� ������ �Ÿ�: %lf", d);
//
//	return d;
//}

void print_menu(); //8�� ����
void print_ham();
void print_che();
void print_san();
void print_end();
void get_menu_number(int num);

int main()
{
	int num;

	print_menu();

	

	return 0;
}
void print_menu() 
{
	int num;

	printf("1. �ܹ���\n");
	printf("2. ġ�����\n");
	printf("3. ������ġ\n");
	printf("4. ����\n");
	printf("���ϴ� �޴��� �����Ͻÿ�.\n");
	
	scanf("%d", &num);
	
	switch (num)
	{
	case 1:
		print_ham();
		break;
	case 2:
		print_che();
		break;
	case 3:
		print_san();
		break;
	case 4:
		print_end();
		break;
	default:
		break;
	}
	get_menu_number(num);

}
void print_ham()
{
	printf("�ܹ��Ű� ȣ��Ǿ����ϴ�.\n");
}
void print_che()
{
	printf("ġ����Ű� ȣ��Ǿ����ϴ�.\n");
}
void print_san()
{
	printf("������ġ�� ȣ��Ǿ����ϴ�.\n");
}
void print_end() 
{
	printf("�޴��� �����մϴ�.\n");
}
void get_menu_number(int num)
{
	
		while (num >4 || num < 1)
		{
			print_menu();

			scanf("%d", &num);
		}
}
