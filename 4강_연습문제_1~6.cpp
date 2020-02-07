#include <stdio.h>
#define PI = 3.141592;

int main()
{
	/*int time, minute, second;//1번 

	printf("시간을 입력하시오(초):");
	scanf("%d", &time);

	minute = time / 60;
	second = time % 60;

	printf("%d는 %d분 %d초입니다.", time, minute, second);
*/

	int x, y;//2번

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x*y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x%y);

	/*int x = 1;//3번

	printf("정수	 제곱값	 세제곱값\n");
	printf(" %d	   %d	    %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	    %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);
	x++;
	printf(" %d	   %d	   %d\n", x, x*x, x*x*x);*/

	/*int x, hundred, ten, one;//4번

	printf("정수를 입력하시오(세자리수):");
	scanf("%d", &x);

	hundred = x / 100;
	ten = (x % 100)/10;
	one = x % 10;

	printf("백의 자리수: %d\n", hundred);
	printf("십의 자리수: %d\n", ten);
	printf("일의 자리수: %d\n", one);*/

	/*int x, y, z, w;//5번☆

	printf("정수를 입력하시오:");
	scanf("%d", &x);

	printf("정수를 입력하시오:");
	scanf("%d", &y);

	printf("정수를 입력하시오:");
	scanf("%d", &z);

	w = (x > y) ? x : y;

	printf("가장 큰 수는 %d입니다.", (w > z) ? w : z);*/

	/*double x, y;//6번

	printf("정수를 입력하시오:");
	scanf("%lf", &x);

	y = ((x*x*x) - 20) / (x - 7);

	printf("수식의 값은 %lf입니다.", y);*/
	
	
	return 0;
}