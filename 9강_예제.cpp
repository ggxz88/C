#include<stdio.h>
//void swap(int x, int y); //swap1.c

//int main()
//{
//	//int i = 10; //address_of.c
//	//char c = 69;
//	//double f = 12.3;
//
//	//printf("i의 주소: %u\n", &i);
//	//printf("c의 주소: %u\n", &c);
//	//printf("f의 주소: %u\n", &f);
//
//	//int i = 3000; //pointer1.c
//	//int *p;
//	//p = &i;
//
//	//printf("i = %d\n", i); //3000
//	//printf("&i = %u\n\n", &i); // i의 주소
//
//	//printf("p = %u\n", p); // i의 주소
//	//printf("*p = %d\n", *p); // 3000
//
//	/*int x = 10, y = 20; //pointer2.c
//	int *p;
//
//	p = &x;
//	printf("p = %d\n", p);
//	printf("*p = %d\n\n", *p);
//
//	p = &y;
//	printf("p = %d\n", p);
//	printf("*p = %d\n", *p);*/
//
//	/*char *pc; // pointer_arith1.c
//	int *pi;
//	double *pd;
//
//	pc = (char *)10000;
//	pi = (int *)10000;
//	pd = (double *)10000;
//	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//
//	pc++;
//	pi++;
//	pd++;
//	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
//
//	printf("pc+2 = %d, pi+2 = %d, pd+3 = %d\n", pc + 2, pi + 2, pd + 2);*/
//
//	/*int a[] = { 10, 20, 30, 40, 50 }; //p_array3.c
//
//	printf("a = %u\n", a);
//
//	printf("a + 1 = %u\n", a + 1);
//
//	printf("*a = %d\n", *a);
//
//	printf("*(a+1) = %d\n", *(a + 1));
//
//	printf("a[1] = %d\n", a[1]);
//*/
//
//	return 0;
//}
//int main()
//{
//	int a = 100, b = 200; // swap1.c => 원하는 값이 안나옴 값이 바뀌지 않음
//
//	printf("swap() 호출전 a = %d b = %d\n", a, b);
//
//	swap(a, b);
//
//	printf("swap() 호출 후 a = %d b = %d\n", a, b);
//
//	return 0;
//}
//void swap(int x, int y)
//{
//	int tmp;
//
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap(int *px, int *py); //swap2.c
//int main()
//{
//	int a = 100, b = 200;
//
//	printf("a=%d b=%d\n", a, b);
//
//	swap(&a, &b);
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//
//}
//void swap(int *px, int *py)
//{
//	int tmp;
//
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//
//}
#include <stdio.h> //p_func.c
#define SIZE 5
double get_avg(int values[], int n);
void check_values(int values[], int n);

int main()
{
	int i;
	int data[5];
	double result;

	for (i = 0; i < SIZE; i++)
	{
		printf("값을 입력하시오: ");
		scanf("%d", &data[i]);
	}
	check_values(data, SIZE);
	result = get_avg(data, SIZE);
	printf("값들의 평균은 %f\n", result);
	return 0;
}
double get_avg(int values[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (values[i] < 0)
			values[i] = 0;
}
void check_values(int values[], int n)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
	{		sum += values[i];}
	return sum/n;

}

