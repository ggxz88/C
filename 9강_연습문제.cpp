//#include <stdio.h> // 1-(a)
//#include <stdlib.h>
//
//void fill_array(int *A, int size);
//int main()
//{
//	int a[10] = { 0 , };
//
//	fill_array(a, 10);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//	return 0;
//}
//void fill_array(int *A, int size)
//{
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		*(A + i) = rand();
//	}
//
//}

//#include <stdio.h> //1-(b)
//
//void copy_array(int *A, int *B, int size);
//int main()
//{
//	int A[5] = { 1, 2, 3, 4, 5 };
//	int B[5] = { 6, 7, 8, 9, 10 };
//
//	copy_array(A, B, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("배열 B[%d]의 요소 : %d\n", i,  B[i]);
//		printf("\n");
//	}
//
//	return 0;
//}
//void copy_array(int *A, int *B, int size)
//{
//	int tmp;
//
//	for (int i = 0; i < size; i++)
//	{
//		tmp = *(A+i);
//		*(A+i) = *(B+i);
//		*(B+i) = tmp;
//	}
//}

//#include<stdio.h> //1-(c)
//
//void add_array(int *A, int *B, int *C, int size);
//int main()
//{
//	int A[5] = { 1, 2, 3, 4, 5 };
//	int B[5] = { 6, 7, 8, 9, 10 };
//	int C[5] = { 0, };
//
//	add_array(A, B, C, 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("배열 C[%d]의 요소: %d\n", i, C[i]);
//	}
//	return 0;
//}
//void add_array(int *A, int *B, int *C, int size)
//{
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		*(C + i) = *(A + i) + *(B + i);
//	}
//}
//#include <stdio.h> //1-(d)
//
//int get_array_sum(int *A, int size);
//int main()
//{
//	int A[5] = { 1, 2, 3, 4, 5 };
//
//	get_array_sum(A, 5);
//
//	return 0;
//}
//int get_array_sum(int *A, int size)
//{
//	int sum = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		sum += *(A+i);
//	}
//	printf("배열 원소들의 합 : %d\n", sum);
//
//	return sum;
//}
//#include <stdio.h> // 2
//
//void separate(double n, int *i, double *d);
//int main()
//{
//	int INT;
//	double demi, num;
//
//	printf("실수를 입력하시오: ");
//	scanf("%lf", &num);
//
//	separate(num, &INT, &demi);
//
//	return 0;
//}
//void separate(double n, int *i, double *d)
//{
//	
//	*i = (int)n;
//
//	*d = n - (int)n;
//
//	printf("정수 부분은 %d입니다.\n", *i);
//	printf("소수점 이하 부분은 %lf입니다.\n", *d);
//}

#include <stdio.h>

void lower(int *im, int pix);
int main()
{
	int image[100] = { 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
					   0, 0, 0, 9, 9, 0, 0, 0, 0, 0,
					   0, 0, 9, 0, 9, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 9 ,0, 0, 0, 0, 0,
					   0, 0, 6, 6, 9, 7, 7, 0, 0, 0 };

	lower(image, 100);
	return 0;
}
void lower(int *im, int pix)
{
	for (int i = 0; i < pix; i++)
	{
		if (im[i] > 0)
		{
			im[i]--;
		}
		printf("%d, ", *(im + i));
	}
}