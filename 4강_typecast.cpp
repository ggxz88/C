#include<stdio.h>

int main()
{
	int i;
	double f;

	f = 5 / 4;
	printf("%f\n", f);

	f = (double)5 / 4;
	printf("%f\n", f);

	f = 5 / (double)4;
	printf("%f\n", f);

	f = (double)5 / (double)4;
	printf("%f\n", f);

	i = 1.3 + 1.8;
	printf("%d\n", i);//printf("%f\n", (double)i);은 3.00000 int로 저장이 되어서

	i = (int)1.3 + (int)1.8;
	printf("%d\n", i);

	return 0;
}