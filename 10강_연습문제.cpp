#include<stdio.h>
#include<string.h>
int main()
{
	/*char code; // 2��

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &code);

	printf("������ �ƽ�Ű �ڵ� ��: %d\n", code);*/

	//char arr[100] = { 0 };//3��(�ٽ�)
	//char arr2[100] = { 0 };
	//int i, j =0;
	//
	//printf("���ڿ��� �Է��Ͻÿ�: ");
	//gets_s(arr);

	//
	//for (i = 0; i < strlen(arr); i++)
	//{
	//	if (arr[i] != '\0')
	//		arr2[j++] = arr[i];
	//}
	//printf("%s\n", arr2);


	char source[1000] = { 0 }; //6��
	char arr[100] = { 0 };

	printf("������ �Է��Ͻÿ�: ");
	gets_s(arr);

	strcpy(source, "#include <stdio.h>\n");
	strcat(source, "int main(void)\n");
	strcat(source, "{\n\t");
	strcat(source, arr);
	strcat(source, "\n\treturn 0;\n");
	strcat(source, "}\n");

	printf("��ü ���α׷�: \n%s", source);

	return 0;
}