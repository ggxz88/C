#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
	/*FILE *fp = NULL;

	fp = fopen("Sample.txt", "w");

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fclose(fp);*/

	/*FILE *fp = NULL;  //fputc.c

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);

	fclose(fp);
	*/
/*
	FILE *fp = NULL;//fgetc.c
	int c;

	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	
	fclose(fp);*/

	//FILE *fp; // fgets.c
	//char str[256];

	//printf("���ڿ��� �Է��Ͻÿ�: ");
	//gets_s(str);

	//fp = fopen("sample.txt", "w");
	//
	//if (fp == NULL)
	//	printf("���� ���� ����\n");
	//else
	//	printf("���� ���� ����\n");

	//fputs(str, fp);

	//fclose(fp);

	//FILE *fp; // fgets.c
	//char str[100];

	//fp = fopen("sample.txt", "r");

	//if (fp == NULL)
	//	printf("���� ���� ����\n");
	//else
	//	printf("���� ���� ����\n");

	//if (fgets(str, 100, fp) != NULL)
	//	puts(str);

	//fclose(fp);

	/*FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("���� ���� �̸�: ");
	scanf("%s", file1);

	printf("���� ���� �̸�: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file2);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL)
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);*/

	
	/*FILE *fp;//fprintf.c

	fp = fopen("sample.txt", "w");
	fprintf(fp, "2017. 3. 1 ����:%10d \n");

	fclose(fp);*/
	

	/*int buffer[SIZE] = { 10, 20, 30, 40, 50 };//binary1,c
	FILE *fp = NULL;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.");
		return 1;
	}

	fwrite(buffer, sizeof(int), SIZE, fp);
	*/	

	/*int buffer[SIZE] = { 10, 20, 30, 40, 50 };//binary2.c
	FILE *fp = NULL;
	size_t size;

	fp = fopen("binary.bin", "rb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.");
		exit(1);
	}
	size = fread(buffer, sizeof(int), SIZE, fp);
	if (size != SIZE)
	{
		fprintf(stderr, "�б� ���� �� ������ �߻��߽��ϴ�.\n");
	}
	fclose(fp);

	for (int i = 0; i < SIZE; i++)
		printf("%d\n", buffer[i]);*/

	return 0;
}