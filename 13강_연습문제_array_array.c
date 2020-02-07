#include<stdio.h>
#include"array.h"

void get_sum_of_array(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	printf("гу = %d\n", sum);
}
void print_array(int *a, int size) 
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}
}
