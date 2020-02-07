#include <stdio.h>
#include <math.h>

//void get_divisor(int n); //1번
//
//int main() 
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	get_divisor(n);
//
//	return 0;
//}
//void get_divisor(int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//double dist_2d(int x1, int x2, int y1, int y2); //4번
//
//int main()
//{
//	int x1, x2, y1, y2;
//
//	printf("점의 좌표를 입력하시오(첫 번째 x): ");
//	scanf("%d", &x1);
//
//	printf("점의 좌표를 입력하시오(첫 번째 y): ");
//	scanf("%d", &y1);
//
//	printf("점의 좌표를 입력하시오(두 번째 x): ");
//	scanf("%d", &x2);
//
//	printf("점의 좌표를 입력하시오(두 번째 y): ");
//	scanf("%d", &y2);
//
//	dist_2d(x1, x2, y1, y2);
//
//	return 0;
//}
//double dist_2d(int x1, int x2, int y1, int y2)
//{
//	double r, d;
//
//	r = ((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2));
//
//	d = sqrt(r);
//
//	printf("두 점 사이의 거리: %lf", d);
//
//	return d;
//}

void print_menu(); //8번 보류
void print_ham();
void print_che();
void print_san();
void print_end();
void get_menu_number(int num);

int main()
{
	int num;

	print_menu();

	

	return 0;
}
void print_menu() 
{
	int num;

	printf("1. 햄버거\n");
	printf("2. 치즈버거\n");
	printf("3. 샌드위치\n");
	printf("4. 종료\n");
	printf("원하는 메뉴를 선택하시오.\n");
	
	scanf("%d", &num);
	
	switch (num)
	{
	case 1:
		print_ham();
		break;
	case 2:
		print_che();
		break;
	case 3:
		print_san();
		break;
	case 4:
		print_end();
		break;
	default:
		break;
	}
	get_menu_number(num);

}
void print_ham()
{
	printf("햄버거가 호출되었습니다.\n");
}
void print_che()
{
	printf("치즈버거가 호출되었습니다.\n");
}
void print_san()
{
	printf("샌드위치가 호출되었습니다.\n");
}
void print_end() 
{
	printf("메뉴를 종료합니다.\n");
}
void get_menu_number(int num)
{
	
		while (num >4 || num < 1)
		{
			print_menu();

			scanf("%d", &num);
		}
}
