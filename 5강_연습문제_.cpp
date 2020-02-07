#include <stdio.h>

int main()
{
	//int x, y; //1번

	//printf("정수를 입력하시오:");
	//scanf("%d", &x);

	//printf("정수를 입력하시오:");
	//scanf("%d", &y);

	//printf("두 수의 합은 %d입니다.\n", x + y);

	//if (x >= y)
	//{
	//	
	//	printf("두 수의 차는 %d입니다.\n", x - y);
	//}
	//else
	//{
	//	printf("두 수의 차는 %d입니다.\n", y - x);
	//}

	int income, income_tax; //2번

	printf("과세 표준을 입력하시오(만원):");
	scanf("%d", &income);

	if (income <= 1000)
	{
		income_tax = income * 0.08;
		//printf("소득세는 %d만원입니다.", income_tax);
	}
	else if (income > 1000 && income <= 4000)
	{
		income_tax = (1000 * 0.08) + ((income - 1000) * 0.17);
		//printf("소득세는 %d만원입니다.", income_tax);

	}
	else if (income > 4000 && income <= 8000)
	{
		income_tax = (4000 * 0.17) + (income - 4000) * 0.26;
		//printf("소득세는 %d만원입니다.", income_tax);
	}
	else
	{
		income_tax = (8000 * 0.35) + (income - 8000) * 0.35;
		
	}

	printf("소득세는 %d만원입니다.", income_tax);
	/*int mid, fin, average; //3번

	printf("중간 고사 점수를 입력하시오:");
	scanf("%d", &mid);

	printf("기말 고사 점수를 입력하시오:");
	scanf("%d", &fin);

	average = (mid + fin) / 2;

	if(average <=100)
	{
		if (average <= 100 && average >= 90)
		{
			printf("당신의 학점은 A입니다.");
		}
		else if (average < 90 && average >= 80)
		{
			printf("당신의 학점은 B입니다.");
		}
		else if (average < 80 && average >= 70)
		{
			printf("당신의 학점은 C입니다.");
		}
		else if (average < 70 && average >= 60)
		{
			printf("당신의 학점은 D입니다.");
		}
		else
		{
			printf("당신의 학점은 F입니다.");
		}
	}
	else
	{
		printf("다시 입력해주세요");
	}*/

	/*int price, money, change, Ten, Five, One;

	printf("물건의 가격: ");
	scanf("%d", &price);

	printf("고객에게서 받은 화폐: ");
	scanf("%d", &money);

	Ten = (money - price) / 10000;
	Five = ((money - price) % 10000) / 5000 ;
	One = ((money - price) % 10000) / 1000 - (5000 * Five);

	if (price < money)
	{
		printf("고객에게 내어줄 잔돈은 다음과 같습니다.\n");
		printf("만 원권: %d매\n", Ten);
		printf("오천 원권: %d매\n", Five);
		printf("천 원권: %d매\n", One);
	}
	else if (price = money)
	{
		printf("고객에게 내어줄 잔돈은 없습니다.\n");
	}
	else
		printf("돈이 모자릅니다.\n");*/

	return 0;
}