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
//	printf("�й��� �Է��Ͻÿ�: ");
//	scanf("%d", &s.number);
//
//	printf("�̸��� �Է��Ͻÿ�: ");
//	scanf("%s", s.name);
//
//	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
//	scanf("%lf", &s.grade);
//
//	printf("�й�: %d\n", s.number);
//	printf("�̸�: %s\n", s.name);
//	printf("����: %f\n", s.grade);
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
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
//	scanf("%d %d", &p1.x, &p1.y);
//
//	printf("���� ��ǥ�� �Է��Ͻÿ�(x y): ");
//	scanf("%d %d", &p2.x, &p2.y);
//
//	xdiff = p1.x - p2.x;
//	ydiff = p1.y - p2.y;
//
//	dist = sqrt(xdiff * xdiff + ydiff * ydiff);
//
//	printf("�� �������� �Ÿ��� %f�Դϴ�.\n", dist);
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
//		printf("�й��� �Է��Ͻÿ�: ");
//		scanf("%d", &list[i].number);
//
//		printf("�̸��� �Է��Ͻÿ�: ");
//		scanf("%d", list[i].name);
//
//		printf("������ �Է��Ͻÿ�: ");
//		scanf("%d", &list[i].grade);
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("�й�: %d, �̸�: %s, ����: %f\n", list[i].number, list[i].name, list[i].grade);
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
//	struct student s = { 20070001, "ȫ�浿", 4.3 };
//	struct  student *p;
//	
//	p = &s;
//
//	printf("�й� = %d �̸� = %s ���� = %f \n", s.number, s.name, s.grade);
//	printf("�й� = %d �̸� = %s ���� = %f \n", (*p).number, (*p).name, (*p).grade);
//	printf("�й� = %d �̸� = %s ���� = %f \n", p->number, p->name, p->grade);
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
//	printf("������ ���� (%f, %f)�Դϴ�. \n", sum.x, sum.y);
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
	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.\n", result.x, result.y);

	return 0;
}

POINT translate(POINT p, POINT delta) 
{
	POINT new_p;
	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

