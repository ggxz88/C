
//#include<stdio.h>//4�� ����
//#include<stdlib.h>
//
//int main()
//{
//	FILE *fp;
//	char file[100];
//	char contents[1000];
//	int c;
//
//	printf("���� �̸��� �Է��Ͻÿ�: ");
//	scanf("%s", file);
//
//	fp = fopen(file, "w");
//
//	if ((fp = fopen(file, "w")) == NULL)
//	{
//		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file);
//		exit(1);
//	}
//
//	while(1)
//	{
//		printf("���� ������ �Է��Ͻÿ�: ");
//		gets_s(contents);
//		
//		fprintf(fp, "%s", file);
//	}
//	fclose(fp);
//	
//	/*if ((fp = fopen(file, "r")) == NULL)
//	{
//		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file);
//		exit(1);
//	}
//		
//	fclose(fp);
//*/
//	return 0;
//}

//#include<stdio.h> //5��
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
//	printf("���� 1 �̸�: ");
//	scanf("%s", file1);
//
//	printf("���� 2 �̸�: ");
//	scanf("%s", file2);
//
//	if ((fp1 = fopen(file1, "w")) == NULL)
//	{
//		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file1);
//		exit(1);
//	}
//
//	if ((fp2 = fopen(file2, "w")) == NULL)
//	{
//		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", file2);
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