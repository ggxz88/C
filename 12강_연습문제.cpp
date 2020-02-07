
//#include<stdio.h>//4번 보류
//#include<stdlib.h>
//
//int main()
//{
//	FILE *fp;
//	char file[100];
//	char contents[1000];
//	int c;
//
//	printf("파일 이름을 입력하시오: ");
//	scanf("%s", file);
//
//	fp = fopen(file, "w");
//
//	if ((fp = fopen(file, "w")) == NULL)
//	{
//		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", file);
//		exit(1);
//	}
//
//	while(1)
//	{
//		printf("파일 내용을 입력하시오: ");
//		gets_s(contents);
//		
//		fprintf(fp, "%s", file);
//	}
//	fclose(fp);
//	
//	/*if ((fp = fopen(file, "r")) == NULL)
//	{
//		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", file);
//		exit(1);
//	}
//		
//	fclose(fp);
//*/
//	return 0;
//}

//#include<stdio.h> //5번
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	FILE *fp1, *fp2;
//	char file1[100], file2[100];
//	char buffer[100];
//	char content1[100] = { "sdjasdhfashfd" };
//	char content2[100] = { "sdjasdhfashfd" };
//	
//	
//
//	printf("파일 1 이름: ");
//	scanf("%s", file1);
//
//	printf("파일 2 이름: ");
//	scanf("%s", file2);
//
//	if ((fp1 = fopen(file1, "w")) == NULL)
//	{
//		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", file1);
//		exit(1);
//	}
//
//	if ((fp2 = fopen(file2, "w")) == NULL)
//	{
//		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", file2);
//		exit(1);
//	}
//
//	if ((strcmp(content1, content2) != 0))
//	{
//		printf("%s\n", content1);
//		printf("%s\n", content2);
//	}
//	fputs(content1, fp1);
//	fputs(content2, fp2);
//	
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}
c 