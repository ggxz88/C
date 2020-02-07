#include<stdio.h>
int main(void) 
{
	/*double x;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	printf("지수형식으로는 %e입니다.", x);*///1번


	/*double x, sum;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	sum = 3 * x*x*x + 7 * x*x + 9;

	printf("다항식의 값은 %lf입니다.", sum);*///2번


	/*double x, area;

	printf("면적을 제곱미터 단위로 입력하시오: ");
	scanf("%lf", &x);

	area = x / 3.3058;

	printf("%lf제곱미터는 %lf평입니다.", x, area);*///3번


	/*printf("char형의 크기는 %d바이트입니다,\n", sizeof(char));
	printf("unsigned char형의 크기는 %d바이트입니다,\n", sizeof(unsigned char));
	printf("short형의 크기는 %d바이트입니다,\n", sizeof(short));
	printf("unsigned short형의 크기는 %d바이트입니다,\n", sizeof(unsigned short));
	printf("int형의 크기는 %d바이트입니다,\n", sizeof(int));
	printf("unsigned int형의 크기는 %d바이트입니다,\n", sizeof(unsigned int));
	printf("long형의 크기는 %d바이트입니다,\n", sizeof(long));
	printf("unsigned long형의 크기는 %d바이트입니다,\n", sizeof(unsigned long));
	printf("float형의 크기는 %d바이트입니다,\n", sizeof(float));
	printf("double형의 크기는 %d바이트입니다,\n", sizeof(double));*///4번


	/*int i;

	printf("숫자를 입력하시오: ");
	scanf("%d", &i);

	printf("아스키코드는 %c입니다.", i);*///5번


	/*char ch1, ch2, ch3;
	ch1 = 'a'; ch2 = 'b'; ch3 = 'c';

	printf("10진수: %d, %d, %d\n", ch1, ch2, ch3);
	printf("8진수: %o, %o, %o\n", ch1, ch2, ch3);
	printf("16진수: %x, %x, %x\n", ch1, ch2, ch3);*///6번


	/*char ch1 = 'a' + 1;

	printf("%c\n", ch1);
	
	ch1 = 'a' + 2;
	printf("%c\n", ch1);

	ch1 = 'a' + 3;
	printf("%c\n", ch1);*///7번


	/*printf("\a");
	printf("화재가 발생하였습니다.");*///8번


	/*printf("\"ASCII code\", A, B, C,\n\\t \\a \\n");*///9번


	/*double i;

	printf("실수를 입력하시오: ");
	scanf("%lf", &i);

	printf("%lf, %e", i, i);*///10번 

	return 0;
}