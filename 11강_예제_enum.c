//////#include<stdio.h>
//////
//////enum days { MON, TUE, WED, THU, FRI, SAT, SUN};
//////
//////char *days_name[] = {
//////	"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
//////};
//////
//////int main()
//////{
//////	enum days d;
//////
//////	for (d = MON; d <= SUN; d++)
//////		printf("%d��° ������ �̸��� %s�Դϴ�.\n", d, days_name[d]);
//////
//////	return 0;
//////}
////#include <stdio.h> //6������
////#include <string.h>
////typedef struct Book {
////	char title[100];
////	char writer[20];
////	char position[10];
////}BOOK;
////enum book_info {add = 1, output, search, end};
////enum Genre { ani = 0, sci, fic, cla };
////void print_menu();
////void add();
////int main()
////{
////	BOOK b;
////	enum book_info num ;
////	enum Genre g;
////	char bookname[10];
////	
////	while (1)
////	{
////		print_menu();
////
////		printf("���� ���� �Է��Ͻÿ�: ");
////		scanf("%d", &num);
////
////		switch (num)
////		{
////		case 1:
////			add();
////			break;
////		case 2:
////			printf("����: ");
////			puts(b.title);
////			printf("\n");
////			printf("����: ");
////			puts(b.writer);
////			printf("\n");
////			printf("��ġ: ");
////			puts(b.position);
////			printf("\n");
////			printf("%d", g);
////			if (g == 0)
////			{
////				printf("�帣: ��ȭ\n");
////			}
////			else if (g == 1)
////			{
////				printf("�帣: �������\n");
////			}
////			else if (g == 2)
////			{
////				printf("�帣 : �Ҽ�\n");
////			}
////			else
////			{
////				printf("�帣 : ����\n");
////			}
////			break;
////		case 3:
////			printf("å �̸�: ");
////			gets(bookname);
////			if (strcmp(bookname, b.title) == 0)
////			{
////				printf("ã���ô� å�� %s�� �ֽ��ϴ�.\n", b.position);
////			}
////			break;
////		case 4:
////			printf("����\n");
////			break;
////		default:
////			printf("�߸� �Է��Ͽ����ϴ�.\n");
////			break;
////		}
////
////	}
////	return 0;
////}
////void print_menu()
////{
////	printf("==========================\n");
////	printf("1. �߰�\n");
////	printf("2. ���\n");
////	printf("3. �˻�\n");
////	printf("4. ����\n");
////	printf("==========================\n");
////}
////void add() {
////	printf("����: ");
////	gets(b.title);
////	printf("\n");
////	printf("����: ");
////	gets(b.writer);
////	printf("\n");
////	printf("��ġ: ");
////	gets(b.position);
////	printf("\n");
////	printf("�帣(0: ��ȭ, 1: �������, 2: �Ҽ�, 3: ����) ");
////	scanf("%d", &g);
////}
#include <stdio.h> //6������
#include <string.h>
typedef struct Book {
	char title[100];
	char writer[20];
	char position[10];
}BOOK;
enum book_info {add = 1, output, search, end};
enum Genre { ani = 0, sci, fic, cla };
void print_menu();

int main()
{
	BOOK b;
	enum book_info num ;
	//int num;
	enum Genre g;
	char bookname[10];

	while (1)
	{
		print_menu();

		printf("���� ���� �Է��Ͻÿ�: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			num = getchar();
			printf("����: ");
			gets(b.title);
			printf("\n");
			printf("����: ");
			gets(b.writer);
			printf("\n");
			printf("��ġ: ");
			gets(b.position);
			printf("\n");
			printf("�帣(0: ��ȭ, 1: �������, 2: �Ҽ�, 3: ����) ");
			scanf("%d", &g);
			break;
		case 2:
			printf("����: ");
			puts(b.title);
			printf("\n");
			printf("����: ");
			puts(b.writer);
			printf("\n");
			printf("��ġ: ");
			puts(b.position);
			printf("\n");
			printf("%d", g);
			if (g == 0)
			{
				printf("�帣: ��ȭ\n");
			}
			else if (g == 1)
			{
				printf("�帣: �������\n");
			}
			else if (g == 2)
			{
				printf("�帣 : �Ҽ�\n");
			}
			else
			{
				printf("�帣 : ����\n");
			}
			break;
		case 3:
			num = getchar();
			printf("å �̸�: ");
			gets(bookname);
			if (strcmp(bookname, b.title) == 0)
			{
				printf("ã���ô� å�� %s�� �ֽ��ϴ�.\n", b.position);
			}
			break;
		case 4:
			return -1;
	
		default:
			printf("�߸� �Է��Ͽ����ϴ�.\n");
			break;
		}

	}
	return 0;
}
void print_menu()
{
	printf("==========================\n");
	printf("1. �߰�\n");
	printf("2. ���\n");
	printf("3. �˻�\n");
	printf("4. ����\n");
	printf("==========================\n");
}
//#include<stdio.h> //4��
//
//typedef struct complex_number {
//	float x;
//	float y;
//}COMPLEX;
//
//int main()
//{
//	COMPLEX c1, c2;
//	float sumx = 0, sumy = 0;
//	printf("ù ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
//	scanf("%f %f", &c1.x, &c1.y);
//	printf("�� ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
//	scanf("%f %f", &c2.x, &c2.y);
//
//	sumx = c1.x + c2.x;
//	sumy = c1.y + c2.y;
//
//
//	printf("���Ҽ��� ���� %0.1f + %.1fi�Դϴ�.", sumx, sumy);
//
//
//	return 0;
//}