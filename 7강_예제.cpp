#include <stdio.h>

//int get_max(int x, int y); //get_max.c
//
//int main()
//{ 
//	int a, b;
//
//	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
//	scanf("%d %d", &a, &b);
//
//	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b));
//	
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y) return(x);
//	else return(y);
//}

//int compute_sum(int n); //compur_sum.c
//
//int main()
//{
//	int n, sum;
//
//	printf("������ �Է��Ͻÿ�: ");
//	scanf("%d", &n);
//
//	sum = compute_sum(n);
//
//	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
//
//	return 0;
//}
//
//int compute_sum(int n)
//{
//	int i;
//	int result = 0;
//
//	for (i = 1; i <= n; i++)
//		result += i;
//
//	return result;
//}

//int inc(int counter); //�Ű� ������ �߸��� ����
//
//int main()
//{
//	int i;
//
//	i = 10;
//
//	printf("�Լ� ȣ�� �� i = %d\n", i);
//	inc(i); //i = inc(i);�� ������Ʈ ����� ��
//	printf("�Լ� ȣ�� �� i = %d\n", i);
//
//	return 0;
//
//}
//int inc(int counter)
//{
//	counter ++;
//	printf("�Լ� �� counter = %d\n", counter);
//	return counter;
//}

//void f(void);//�������� �߸��� ����
//
//int i;//main���� �־���� ���ϴ� ���� �����
//int main()
//{
//	//int i; //�������� i�� main(), f() �Ѵ� ����ϱ� ������ ���ϴ� # 50���� ������ ����
//
//	for (i = 0; i < 5; i++)
//	{
//		f();
//	}
//
//	return 0;
//}
//void f(void)
//{
//	for (i = 0; i < 10; i++)
//		printf("#");
//}

void sub(void);

int main()
{
	int i;
	for (i = 0; i < 3; i++)
		sub();

	return 0;
}
void sub(void)
{
	int auto_count = 0; //�ڵ� �Ҹ� ��������
	static int static_count = 0; // ���� ���� ������ �ѹ��� �ʱ�ȭ ��

	auto_count++;
	static_count++;

	printf("suto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}