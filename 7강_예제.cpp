#include <stdio.h>

//int get_max(int x, int y); //get_max.c
//
//int main()
//{ 
//	int a, b;
//
//	printf("두개의 정수를 입력하시오: ");
//	scanf("%d %d", &a, &b);
//
//	printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b));
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
//	printf("정수를 입력하시오: ");
//	scanf("%d", &n);
//
//	sum = compute_sum(n);
//
//	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);
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

//int inc(int counter); //매개 변수의 잘못된 예제
//
//int main()
//{
//	int i;
//
//	i = 10;
//
//	printf("함수 호출 전 i = %d\n", i);
//	inc(i); //i = inc(i);로 업데이트 해줘야 함
//	printf("함수 호출 후 i = %d\n", i);
//
//	return 0;
//
//}
//int inc(int counter)
//{
//	counter ++;
//	printf("함수 내 counter = %d\n", counter);
//	return counter;
//}

//void f(void);//전역변수 잘못된 예제
//
//int i;//main으로 넣어야지 원하는 답이 도출됨
//int main()
//{
//	//int i; //전역변수 i를 main(), f() 둘다 사용하기 때문에 원하는 # 50개가 나오지 않음
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
	int auto_count = 0; //자동 소멸 지역변수
	static int static_count = 0; // 정적 지역 변수로 한번만 초기화 됨

	auto_count++;
	static_count++;

	printf("suto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}