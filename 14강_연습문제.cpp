#include<stdio.h>
#include<stdlib.h>

int *p, n;

void print_menu();
int dynamic();
void array(int size);
void print_array(int size);
void sum_array(int size);
void r_dynamic();
int main()
{
	int num;

	while (1)
	{
		print_menu();

		printf("�޴��� �����Ͻÿ�: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf("ũ�⸦ �Է��Ͻÿ�: ");
			scanf("%d", &n);
			dynamic();
			break;
		case 2:
			array(n);
			break;
		case 3:
			print_array(n);
			break;
		case 4:
			sum_array(n);
			break;
		case 5:
			r_dynamic();
			return -1;
		}
	}

	return 0;
}
void print_menu() 
{	
	printf("============================================\n");
	printf("1. ũ�Ⱑ n�� ���� �迭�� ����\n");
	printf("2. �迭�� ������ ä���. \n");
	printf("3. �迭�� �� ���Ҹ� ����Ѵ�. \n");
	printf("4. �迭�� �� ���ҵ��� ���� ����Ѵ�.\n");
	printf("5. ���� �Ҵ� ������ �ݳ��Ѵ�.\n");
	printf("============================================\n");
}
int dynamic()
{
	p = (int *)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		return 1;
	}	
}
void array(int size)
{
	for (int i = 0; i < size; i++)
	{
		*(p + i) = rand();
	}
}
void print_array(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", *(p + i));
	}
}
void sum_array(int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(p + i);
	}
	printf("%d\n", sum);
}
void r_dynamic()
{
	free(p);
}

//#include<stdio.h>//exercise
//#include<malloc.h>
//#include <string.h>
//int main()
//{
//	//char *p;
//	int *p;
//	int i, average = 0, sum = 0;
//	//p = (char *)malloc(sizeof(char) * 100);
//	p = (int *)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("���� �޸� �Ҵ� ����\n");
//		return 1;
//	}
//	//strcpy(p, "Actions speak louder than words");
//	//printf("%s\n", p);
//	//*p = 100;
//	//printf("*p = %d\n", *p);
//	
//	for (i = 0; i < 10; i++)//b
//	{
//		//*(p + i) = i + 1;
//		printf("%d\n", *(p + i));
//
//		//sum += *(p + i);
//	}
//	//average = sum / 10;
//	//printf("��� = %d\n", average);
//	free(p);
//
//	return 0;
//}