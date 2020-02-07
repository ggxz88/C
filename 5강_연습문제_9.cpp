#include <stdio.h>

int main()
{
//9¹ø
	int score = 0;
	char grade;
	
	printf("Á¡¼ö:");
	scanf("%d", &score);

	int iscore = score/10;

	switch (iscore)
	{
	case 10:
	case 9:
		grade = 'A';
		printf("%c", grade);
		break;
	case 8:
		grade = 'B';
		printf("%c", grade);
		break;
	case 7:
		grade = 'C';
		printf("%c", grade);
	case 6:
		grade = 'D';
		printf("%c", grade);
		break;
	default:
		grade = 'F';
		printf("%c", grade);
	
	}
	 
	return 0;

}