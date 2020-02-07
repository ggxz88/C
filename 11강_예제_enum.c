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
//////		printf("%d번째 요일의 이름은 %s입니다.\n", d, days_name[d]);
//////
//////	return 0;
//////}
////#include <stdio.h> //6번보류
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
////		printf("정수 값을 입력하시오: ");
////		scanf("%d", &num);
////
////		switch (num)
////		{
////		case 1:
////			add();
////			break;
////		case 2:
////			printf("제목: ");
////			puts(b.title);
////			printf("\n");
////			printf("저자: ");
////			puts(b.writer);
////			printf("\n");
////			printf("위치: ");
////			puts(b.position);
////			printf("\n");
////			printf("%d", g);
////			if (g == 0)
////			{
////				printf("장르: 만화\n");
////			}
////			else if (g == 1)
////			{
////				printf("장르: 공상과학\n");
////			}
////			else if (g == 2)
////			{
////				printf("장르 : 소설\n");
////			}
////			else
////			{
////				printf("장르 : 고전\n");
////			}
////			break;
////		case 3:
////			printf("책 이름: ");
////			gets(bookname);
////			if (strcmp(bookname, b.title) == 0)
////			{
////				printf("찾으시는 책은 %s에 있습니다.\n", b.position);
////			}
////			break;
////		case 4:
////			printf("종료\n");
////			break;
////		default:
////			printf("잘못 입력하였습니다.\n");
////			break;
////		}
////
////	}
////	return 0;
////}
////void print_menu()
////{
////	printf("==========================\n");
////	printf("1. 추가\n");
////	printf("2. 출력\n");
////	printf("3. 검색\n");
////	printf("4. 종료\n");
////	printf("==========================\n");
////}
////void add() {
////	printf("제목: ");
////	gets(b.title);
////	printf("\n");
////	printf("저자: ");
////	gets(b.writer);
////	printf("\n");
////	printf("위치: ");
////	gets(b.position);
////	printf("\n");
////	printf("장르(0: 만화, 1: 공상과학, 2: 소설, 3: 고전) ");
////	scanf("%d", &g);
////}
#include <stdio.h> //6번보류
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

		printf("정수 값을 입력하시오: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			num = getchar();
			printf("제목: ");
			gets(b.title);
			printf("\n");
			printf("저자: ");
			gets(b.writer);
			printf("\n");
			printf("위치: ");
			gets(b.position);
			printf("\n");
			printf("장르(0: 만화, 1: 공상과학, 2: 소설, 3: 고전) ");
			scanf("%d", &g);
			break;
		case 2:
			printf("제목: ");
			puts(b.title);
			printf("\n");
			printf("저자: ");
			puts(b.writer);
			printf("\n");
			printf("위치: ");
			puts(b.position);
			printf("\n");
			printf("%d", g);
			if (g == 0)
			{
				printf("장르: 만화\n");
			}
			else if (g == 1)
			{
				printf("장르: 공상과학\n");
			}
			else if (g == 2)
			{
				printf("장르 : 소설\n");
			}
			else
			{
				printf("장르 : 고전\n");
			}
			break;
		case 3:
			num = getchar();
			printf("책 이름: ");
			gets(bookname);
			if (strcmp(bookname, b.title) == 0)
			{
				printf("찾으시는 책은 %s에 있습니다.\n", b.position);
			}
			break;
		case 4:
			return -1;
	
		default:
			printf("잘못 입력하였습니다.\n");
			break;
		}

	}
	return 0;
}
void print_menu()
{
	printf("==========================\n");
	printf("1. 추가\n");
	printf("2. 출력\n");
	printf("3. 검색\n");
	printf("4. 종료\n");
	printf("==========================\n");
}
//#include<stdio.h> //4번
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
//	printf("첫 번째 복소수를 입력하시오(a, b): ");
//	scanf("%f %f", &c1.x, &c1.y);
//	printf("두 번째 복소수를 입력하시오(a, b): ");
//	scanf("%f %f", &c2.x, &c2.y);
//
//	sumx = c1.x + c2.x;
//	sumy = c1.y + c2.y;
//
//
//	printf("복소수의 합은 %0.1f + %.1fi입니다.", sumx, sumy);
//
//
//	return 0;
//}