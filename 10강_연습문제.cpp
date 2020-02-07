#include<stdio.h>
#include<string.h>
int main()
{
	/*char code; // 2번

	printf("문자를 입력하시오: ");
	scanf("%c", &code);

	printf("문자의 아스키 코드 값: %d\n", code);*/

	//char arr[100] = { 0 };//3번(다시)
	//char arr2[100] = { 0 };
	//int i, j =0;
	//
	//printf("문자열을 입력하시오: ");
	//gets_s(arr);

	//
	//for (i = 0; i < strlen(arr); i++)
	//{
	//	if (arr[i] != '\0')
	//		arr2[j++] = arr[i];
	//}
	//printf("%s\n", arr2);


	char source[1000] = { 0 }; //6번
	char arr[100] = { 0 };

	printf("문장을 입력하시오: ");
	gets_s(arr);

	strcpy(source, "#include <stdio.h>\n");
	strcat(source, "int main(void)\n");
	strcat(source, "{\n\t");
	strcat(source, arr);
	strcat(source, "\n\treturn 0;\n");
	strcat(source, "}\n");

	printf("전체 프로그램: \n%s", source);

	return 0;
}