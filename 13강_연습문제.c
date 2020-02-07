//#define RANGE(x, y, z)  ((x)<(y)||(x)>(z)?0:1)  //1-(a)
//#define ODD_GT(x, y) (((x)/2=1)&&(x)>(y)?1:0) //1-(b)
//#define IS_UPPER(c) ((c)>='A'&&(c)<='Z'?1:0) //1-(c)
//#include <stdio.h> //2
//#define DEBUG
//
//double average(int *a, int size);
//
//int main()
//{
//	int A[6] = { 1, 2, 3, 4, 5, 6 };
//
//	
//#ifdef DEBUG
//	printf("∆Ú±’¿ª ∞ËªÍ«’¥œ¥Ÿ.\n");
//#endif
//	{
//		double avg = average(A, 6);
//		printf("∆Ú±’ = %lf\n", avg);
//	}
//
//	return 0;
//}
//double average(int *a, int size)
//{
//	int i;
//	double average;
//	int sum = 0;
//	
//#ifdef DEBUG
//	{
//		for (i = 0; i < size; i++)
//		{
//			printf("%d\n", a[i]);
//		}
//	}
//#endif
//	{
//		for (i = 0; i < size; i++)
//		{
//			sum += a[i];
//		}
//#ifdef DEBUG
//			printf("%d\n", sum);
//#endif
//		
//	average = sum / size;
//	}
//return average;
//}