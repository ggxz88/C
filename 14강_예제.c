#include<stdio.h>
#include<stdlib.h>
#include<string.h>//malloc4.c

struct Book {
	int number;
	char title[100];
};//malloc4.c

int main()
{
	/*int *pi = NULL; //malloc.c

	pi = (int *)malloc(sizeof(int));
	
	if (pi == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	
	*pi = 100;
	printf("%d\n", *pi);

	free(pi);*/

	//int *pc = NULL; //malloc1.c

	//pc = (char *)malloc(sizeof(char));

	//if (pc == NULL)
	//{
	//	printf("�޸� �Ҵ� ����\n");
	//	exit(1);
	//}

	//*pc = 'm';
	//printf("*pc = %d\n", *pc);

	//free(pc); 

	//char *pc = NULL; //malloc2.c
	//int i = 0;

	//pc = (char *)malloc(100 * sizeof(char));
	//if (pc == NULL)
	//{
	//	printf("�޸� �Ҵ� ����\n");
	//	exit(1);
	//}
	//for (i = 0; i < 26; i++)
	//{
	//	*(pc + i) = 'a' + i;
	//}
	//*(pc + i) = 0;

	//printf("%s\n", pc);
	//free(pc);

	//int *p; // malloc5.c
	//int i, items;

	//printf("�׸��� ������ ��Դϱ�?");
	//scanf("%d", &items);
	//p = (int *)malloc(sizeof(int)*items);

	//for (i = 0; i < items; i++)
	//{
	//	printf("�׸�(����)�� �Է��Ͻÿ�: ");
	//	scanf("%d", &p[i]);//�迭�� �ؼ� & ��� //p+i
	//}

	//printf("\n�Էµ� ���� ������ �����ϴ�.: \n");
	//for (i = 0; i < items; i++)
	//	pritnf("%d ", p[i]); //*(p+i)
	//printf("\n");
	//free(p);

	struct Book *p;

	p = (struct Book *)malloc(2 * sizeof(struct Book));

	if (p == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	p->number = 1;
	strcpy(p->title, "C Programming");

	(p + 1)->number = 2;
	strcpy((p+1)->title, "Data Structure");

	printf("Book number : %d, Book title : %s\n", p->number, p->title);
	printf("Book number : %d, Book title : %s\n", (p+1)->number, (p+1)->title);

	free(p);
	return 0;
}