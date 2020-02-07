#include<stdio.h>

int main()
{
	int x = 0, nextx = 0;
	x = 0;//reset
	nextx = ++x;
	printf("nextx=%d, x=%d\n", nextx, x); 
	x = 0;//reset
	nextx = x++;
	printf("nextx=%d, x=%d\n", nextx, x);
	x = 0;//reset
	nextx = --x;
	printf("nextx=%d, x=%d\n", nextx, x);
	x = 0;//reset
	nextx = x--;
	printf("nextx=%d, x=%d\n", nextx, x);

	return 0;
}