#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//char str1[6] = "seoul"; // string1.c
	//char str2[3] = { 'i', 's','\0' };
	//char str3[] = "the capital city of korea.";

	//printf("%s %s %s\n", str1, str2, str3);

	/*char str[30] = "A barking dog never bites";
	int i = 0;

	while (str[i] != 0)
		i++;
	
	printf("문자열 %s의 길이는 %d입니다.\n", str, i);*/

	/*
	int ch;//getchar.c
	ch = getchar();
	putchar(ch);*/

	/*char name[100];//gets.c
	char address[100];

	printf("이름을 입력하시오: ");
	gets_s(name);
	printf("현재 거주하는 주소를 입력하시오: ");
	gets_s(address);

	puts(name);
	puts(address);
*/

	//char string[80]; //strcpy_strcat.c

	//strcpy(string, "hello world from");
	//strcat(string, "strcpy");
	//strcat(string, "and");
	//strcat(string, "strcat!");
	//printf("string = %s\n", string);

	/*char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];

	int i;
	double d;
	double result;

	i = atoi(s1);
	d = atof(s2);

	result = i + d;

	printf("연산결과는 = %f입니다.\n", result); 
*/

	//char s[] = "Helloworld";
	//char *p = "Helloworld";

	//s[0] = 'h';
	////p[0] = 'h'

	//printf("배열 s에 저장되는 문자열 = %s\n", s);
	//printf("포인터가 가리키는 문자열 =%s\n", p);

	//p = "goodbye";//포인터는 변경할 수 있으므로 이 것은 가능
	//printf("포인터가 가리키는 문자열 = %s\n", p);
	return 0;

}