#include <stdio.h>//1번
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
	struct Email e = { "답장바랍니다", "dd@naver.com","gg@naver.com", "첨부파일 확인 부탁드립니다.", "2018.12.1", 1 };

	printf("제목: %s\n", e.title);
	printf("수신자: %s\n", e.receiver);
	printf("발신자: %s\n", e.sender);
	printf("내용: %s\n", e.contents);
	printf("날짜: %s\n", e.date);
	printf("우선순위: %d\n", e.prior);

	return 0;
}

//#include<stdio.h> // 3번
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
//	printf("나이가 20 이상 30 이하인 직원: \n");
//	for (int i = 0; i < 10; i++)
//	{
//		if (list[i].age >= 20 && list[i].age <= 30)
//		{
//			printf("사원번호 : %d, 이름 : %s, 전화번호 : %s, 나이 : %d \n", list[i].empno, list[i].empname, list[i].pnum, list[i].age);
//		}
//	}
//	return 0;
//}

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
//	int sumx = 0, sumy = 0;
//	printf("첫 번째 복소수를 입력하시오(a, b): ");
//	scanf("%f %f", &c1.x, &c1.y);
//	printf("두 번째 복소수를 입력하시오(a, b): ");
//	scanf("%f %f", &c2.x, &c2.y);
//
//	sumx = c1.x + c2.x;
//	sumy = c1.y + c2.y;
//
//
//	printf("복소수의 합은 %f + %fi입니다.", sumx, sumy);
//
//
//	return 0;
//}
//#include <stdio.h> //6번보류
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
//		printf("정수 값을 입력하시오: ");
//		scanf("%d", &num);
//
//		switch (num)
//		{
//		case 1:
//			printf("추가\n");
//			num = getchar();
//			printf("제목: ");
//			gets_s(b.title);
//			printf("\n");
//			printf("저자: ");
//			gets_s(b.writer);
//			printf("\n");
//			printf("위치: ");
//			gets_s(b.position);
//			printf("\n");
//			printf("장르(0: 만화, 1: 공상과학, 2: 소설, 3: 고전) ");
//			scanf("%d", &g);
//			break;
//		case 2:
//			printf("제목: ");
//			puts(b.title);
//			printf("\n");
//			printf("저자: ");
//			puts(b.writer);
//			printf("\n");
//			printf("위치: ");
//			puts(b.position);
//			printf("\n");
//			printf("%d", g);
//			if (g == 0)
//			{
//				printf("장르: 만화\n");
//			}
//			else if (g == 1)
//			{
//				printf("장르: 공상과학\n");
//			}
//			else if (g == 2)
//			{
//				printf("장르 : 소설\n");
//			}
//			else
//			{
//				printf("장르 : 고전\n");
//			}
//			break;
//		case 3:
//			num = getchar();
//			printf("책 이름: ");
//			gets_s(bookname);
//			if (strcmp(bookname, b.title) == 0)
//			{
//				printf("찾으시는 책은 %s에 있습니다.\n", b.position);
//			}
//			break;
//		case 4:
//			printf("종료\n");
//			break;
//		default:
//			printf("잘못 입력하였습니다.\n");
//			break;
//		}
//
//	}
//	return 0;
//}
//void print_menu()
//{
//	printf("==========================\n");
//	printf("1. 추가\n");
//	printf("2. 출력\n");
//	printf("3. 검색\n");
//	printf("4. 종료\n");
//	printf("==========================\n");
//}