#include <stdio.h>//1��
struct Email {
	char title[100];
	char receiver[100];
	char sender[100];
	char contents[1000];
	char date[20];
	int prior;
};
int main()
{
	struct Email e = { "����ٶ��ϴ�", "dd@naver.com","gg@naver.com", "÷������ Ȯ�� ��Ź�帳�ϴ�.", "2018.12.1", 1 };

	printf("����: %s\n", e.title);
	printf("������: %s\n", e.receiver);
	printf("�߽���: %s\n", e.sender);
	printf("����: %s\n", e.contents);
	printf("��¥: %s\n", e.date);
	printf("�켱����: %d\n", e.prior);

	return 0;
}

//#include<stdio.h> // 3��
//
//struct employee {
//	int empno;
//	char empname[10];
//	char pnum[20];
//	int age;
//};
//
//int main()
//{
//	struct employee list[10] = {
//		{1, "Park", "01000000000", 21},
//	{ 2, "Kim", "01011111111", 32 },
//	{ 3, "Lee", "01022222222", 23 },
//	{ 4, "Choi", "01033333333", 44 },
//	{ 5, "Jeong", "01044444444", 25 },
//	{ 6, "Roh", "01055555555", 36 },
//	{ 7, "Bang", "01066666666", 27 },
//	{ 8, "Yoo", "01077777777", 48 },
//	{ 9, "Gang", "01088888888", 29 },
//	{ 10, "Yang", "01099999999", 50 }
//	};
//
//	printf("���̰� 20 �̻� 30 ������ ����: \n");
//	for (int i = 0; i < 10; i++)
//	{
//		if (list[i].age >= 20 && list[i].age <= 30)
//		{
//			printf("�����ȣ : %d, �̸� : %s, ��ȭ��ȣ : %s, ���� : %d \n", list[i].empno, list[i].empname, list[i].pnum, list[i].age);
//		}
//	}
//	return 0;
//}

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
//	int sumx = 0, sumy = 0;
//	printf("ù ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
//	scanf("%f %f", &c1.x, &c1.y);
//	printf("�� ��° ���Ҽ��� �Է��Ͻÿ�(a, b): ");
//	scanf("%f %f", &c2.x, &c2.y);
//
//	sumx = c1.x + c2.x;
//	sumy = c1.y + c2.y;
//
//
//	printf("���Ҽ��� ���� %f + %fi�Դϴ�.", sumx, sumy);
//
//
//	return 0;
//}
//#include <stdio.h> //6������
//#include <string.h>
//typedef struct Book {
//	char title[100];
//	char writer[20];
//	char position[10];
//}BOOK;
////enum book_info {add = 1, output, search, end};
//enum Genre { ani = 0, sci, fic, cla };
//void print_menu();
//
//int main()
//{
//	BOOK b;
//	//enum book_info num ;
//	int num;
//	enum Genre g;
//	char bookname[10];
//	
//	while (1)
//	{
//		print_menu();
//
//		printf("���� ���� �Է��Ͻÿ�: ");
//		scanf("%d", &num);
//
//		switch (num)
//		{
//		case 1:
//			printf("�߰�\n");
//			num = getchar();
//			printf("����: ");
//			gets_s(b.title);
//			printf("\n");
//			printf("����: ");
//			gets_s(b.writer);
//			printf("\n");
//			printf("��ġ: ");
//			gets_s(b.position);
//			printf("\n");
//			printf("�帣(0: ��ȭ, 1: �������, 2: �Ҽ�, 3: ����) ");
//			scanf("%d", &g);
//			break;
//		case 2:
//			printf("����: ");
//			puts(b.title);
//			printf("\n");
//			printf("����: ");
//			puts(b.writer);
//			printf("\n");
//			printf("��ġ: ");
//			puts(b.position);
//			printf("\n");
//			printf("%d", g);
//			if (g == 0)
//			{
//				printf("�帣: ��ȭ\n");
//			}
//			else if (g == 1)
//			{
//				printf("�帣: �������\n");
//			}
//			else if (g == 2)
//			{
//				printf("�帣 : �Ҽ�\n");
//			}
//			else
//			{
//				printf("�帣 : ����\n");
//			}
//			break;
//		case 3:
//			num = getchar();
//			printf("å �̸�: ");
//			gets_s(bookname);
//			if (strcmp(bookname, b.title) == 0)
//			{
//				printf("ã���ô� å�� %s�� �ֽ��ϴ�.\n", b.position);
//			}
//			break;
//		case 4:
//			printf("����\n");
//			break;
//		default:
//			printf("�߸� �Է��Ͽ����ϴ�.\n");
//			break;
//		}
//
//	}
//	return 0;
//}
//void print_menu()
//{
//	printf("==========================\n");
//	printf("1. �߰�\n");
//	printf("2. ���\n");
//	printf("3. �˻�\n");
//	printf("4. ����\n");
//	printf("==========================\n");
//}