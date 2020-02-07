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

		printf("메뉴를 선택하시오: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf("크기를 입력하시오: ");
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
	printf("1. 크기가 n인 동적 배열을 생성\n");
	printf("2. 배열을 난수로 채운다. \n");
	printf("3. 배열의 각 원소를 출력한다. \n");
	printf("4. 배열의 각 원소들의 합을 출력한다.\n");
	printf("5. 동적 할당 공간을 반납한다.\n");
	printf("============================================\n");
}
int dynamic()
{
	p = (int *)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf("동적 메모리 할당 오류\n");
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
//		printf("동적 메모리 할당 오류\n");
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
//	//printf("평균 = %d\n", average);
//	free(p);
//
//	return 0;
//}