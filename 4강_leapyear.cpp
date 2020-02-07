#include <stdio.h>

int main()
{
	int year, result;

	printf("년도를 입력하시오:");
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("result=%d \n", result);//윤년이면 1 아니면 0

	return 0;
}