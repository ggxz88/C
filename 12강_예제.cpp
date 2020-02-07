#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
	/*FILE *fp = NULL;

	fp = fopen("Sample.txt", "w");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	fclose(fp);*/

	/*FILE *fp = NULL;  //fputc.c

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

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
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	while ((c = fgetc(fp)) != EOF)
		putchar(c);
	
	fclose(fp);*/

	//FILE *fp; // fgets.c
	//char str[256];

	//printf("문자열을 입력하시오: ");
	//gets_s(str);

	//fp = fopen("sample.txt", "w");
	//
	//if (fp == NULL)
	//	printf("파일 열기 실패\n");
	//else
	//	printf("파일 열기 성공\n");

	//fputs(str, fp);

	//fclose(fp);

	//FILE *fp; // fgets.c
	//char str[100];

	//fp = fopen("sample.txt", "r");

	//if (fp == NULL)
	//	printf("파일 열기 실패\n");
	//else
	//	printf("파일 열기 성공\n");

	//if (fgets(str, 100, fp) != NULL)
	//	puts(str);

	//fclose(fp);

	/*FILE *fp1, *fp2;
	char file1[100], file2[100];
	char buffer[100];

	printf("원본 파일 이름: ");
	scanf("%s", file1);

	printf("복사 파일 이름: ");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL)
	{
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file2);
		exit(1);
	}

	while (fgets(buffer, 100, fp1) != NULL)
		fputs(buffer, fp2);

	fclose(fp1);
	fclose(fp2);*/

	
	/*FILE *fp;//fprintf.c

	fp = fopen("sample.txt", "w");
	fprintf(fp, "2017. 3. 1 매출:%10d \n");

	fclose(fp);*/
	

	/*int buffer[SIZE] = { 10, 20, 30, 40, 50 };//binary1,c
	FILE *fp = NULL;

	fp = fopen("binary.bin", "wb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		return 1;
	}

	fwrite(buffer, sizeof(int), SIZE, fp);
	*/	

	/*int buffer[SIZE] = { 10, 20, 30, 40, 50 };//binary2.c
	FILE *fp = NULL;
	size_t size;

	fp = fopen("binary.bin", "rb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		exit(1);
	}
	size = fread(buffer, sizeof(int), SIZE, fp);
	if (size != SIZE)
	{
		fprintf(stderr, "읽기 동작 중 오류가 발생했습니다.\n");
	}
	fclose(fp);

	for (int i = 0; i < SIZE; i++)
		printf("%d\n", buffer[i]);*/

	return 0;
}