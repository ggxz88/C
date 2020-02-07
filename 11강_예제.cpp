//#include <stdio.h> // student2.c
//
//struct student {
//	int number;
//	char name[10];
//	double grade;
//};
//
//int main()
//{
//	struct student s;
//
//	printf("학번을 입력하시오: ");
//	scanf("%d", &s.number);
//
//	printf("이름을 입력하시오: ");
//	scanf("%s", s.name);
//
//	printf("학점을 입력하시오(실수): ");
//	scanf("%lf", &s.grade);
//
//	printf("학번: %d\n", s.number);
//	printf("이름: %s\n", s.name);
//	printf("학점: %f\n", s.grade);
//
//	return 0;
//}

//#include<stdio.h> //point.c
//#include<math.h>
//
//struct point
//{
//	int x;
//	int y;
//};
//
//int main()
//{
//	struct point p1, p2;
//	int xdiff, ydiff;
//	double dist;
//
//	printf("점의 좌표를 입력하시오(x y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	printf("점의 좌표를 입력하시오(x y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//
//	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
//
//	printf("두 점사이의 거리는 %f입니다.\n", dist);
//
//	return 0;
//}

//#include<stdio.h>
//#define SIZE 3;
//
//struct student
//{
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student list [SIZE];
//	int i;
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("학번을 입력하시오: ");
//		scanf("%d", &list[i].number);
//
//		printf("이름을 입력하시오: ");
//		scanf("%d", list[i].name);
//
//		printf("학점을 입력하시오: ");
//		scanf("%d", &list[i].grade);
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);
//	}
//
//	return 0;
//
//}

//#include<stdio.h>
//
//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//
//int main()
//{
//	struct student s = { 20070001, "홍길동", 4.3 };
//	struct  student *p;
//	
//	p = &s;
//
//	printf("학번 = %d 이름 = %s 학점 = %f \n", s.number, s.name, s.grade);
//	printf("학번 = %d 이름 = %s 학점 = %f \n", (*p).number, (*p).name, (*p).grade);
//	printf("학번 = %d 이름 = %s 학점 = %f \n", p->number, p->name, p->grade);
//	
//	return 0;
//}
//
//#include<stdio.h>
//struct vector {
//	float x;
//	float y;
//};
//
//struct vector get_vector_sum(struct vector a, struct vector b);
//
//int main()
//{
//	struct vector a = { 2.0, 3.0 };
//	struct vector b = { 5.0, 6.0 };
//	struct vector sum;
//	
//	sum = get_vector_sum(a, b);
//	printf("벡터의 합은 (%f, %f)입니다. \n", sum.x, sum.y);
//
//	return 0;
//}
//
//struct vector get_vector_sum(struct vector a, struct vector b)
//{
//	struct vector result;
//
//	result.x = a.x + b.x;
//	result.y = a.y + b.y;
//
//	return result;
//
//}
#include<stdio.h> // typedef.c

typedef struct point 
{
	int x;
	int y;
}POINT;

POINT translate(POINT p, POINT delta);

int main()
{
	POINT p = { 2, 3 };
	POINT delta = { 10, 10 };
	POINT result;

	result = translate(p, delta);
	printf("세로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta) 
{
	POINT new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

