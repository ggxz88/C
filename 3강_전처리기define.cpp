#include<stdio.h>
#define PI 3.141592

int main(void)
{

	float radius, area, circumference;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circumference = 2.0 * PI * radius;

	printf("�������� %f�Դϴ� \n", radius);
	printf("���� ������ %f�̰� �ѷ��� %f�Դϴ�.\n", area, circumference);

	return 0;

}