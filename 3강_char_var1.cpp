#include<stdio.h>

int main(void) 
{
	char ch = 'A';
	printf("%c의 아스키코드 = %d\n", ch, ch);
	ch = ch + 1;
	printf("%c의 아스키코드 = %d\n", ch, ch);

	return 0;
}