#include <stdio.h>
#define PI = 3.141592;

int main()
{
	/*int time, minute, second;//1�� 

	printf("�ð��� �Է��Ͻÿ�(��):");
	scanf("%d", &time);

	minute = time / 60;
	second = time % 60;

	printf("%d�� %d�� %d���Դϴ�.", time, minute, second);
*/

	int x, y;//2��

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x%y);

	/*int x = 1;//3��

	printf("����	 ������	 ��������\n");
	printf(" %d	   %d	    %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	    %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);*/

	/*int x, hundred, ten, one;//4��

	printf("������ �Է��Ͻÿ�(���ڸ���):");
	scanf("%d", &x);

	hundred = x / 100;
	ten = (x % 100)/10;
	one = x % 10;

	printf("���� �ڸ���: %d\n", hundred);
	printf("���� �ڸ���: %d\n", ten);
	printf("���� �ڸ���: %d\n", one);*/

	/*int x, y, z, w;//5����

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &y);

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &z);

	w = (x > y) ? x : y;

	printf("���� ū ���� %d�Դϴ�.", (w > z) ? w : z);*/

	/*double x, y;//6��

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &x);

	y = ((x*x*x) - 20) / (x - 7);

	printf("������ ���� %lf�Դϴ�.", y);*/
	
	
	return 0;
}