#include <stdio.h>
#define PI 3.14

int main() {

	double radius, area, volume;

	radius = 0;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = (4 / 3) * PI * radius * radius * radius;

	printf("���� ǥ����: %lf\n", area);
	printf("���� ü��: %lf\n", volume);

	return 0;
}