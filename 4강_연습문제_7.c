#include <stdio.h>
#define PI 3.14

int main() {

	double radius, area, volume;

	radius = 0;

	printf("반지름을 입력하시오:");
	scanf("%lf", &radius);

	area = 4 * PI * radius * radius;
	volume = (4 / 3) * PI * radius * radius * radius;

	printf("구의 표면적: %lf\n", area);
	printf("구의 체적: %lf\n", volume);

	return 0;
}