#include <stdio.h>


int main(void) {
	int a, b, c;
	scanf("%d\n %d\n %d", &a, &b, &c);
	if (a + b + c == 180) // 세각의 합 180
	{
		if (a == b && b == c) // a,b,c 60도
		{
			printf("Equilateral");
		}
		else if (a == b && b != c) // 이등변 a=b
		{
			printf("Isosceles");
		}
		else if (a == c && b != c) // 이등변 a=c
		{
			printf("Isosceles");
		}
		else if (b == c && a != b) // b=c
		{
			printf("Isosceles");
		}
		else // a,b,c 모두 다름
		{
			printf("Scalene");
		}
	}
	else // 세각의 합이 180초과
	{
		printf("Error");
	}

	

	return 0;
}




/*int main(void) {

	int a, b, c;

	scanf("%d\n %d\n %d", &a, &b, &c);

		0 < a && a < 180;
		0 < b && b < 180;
		0 < c && c < 180;
	

	if (a == 60 && b == 60 && c == 60) {
		printf("Equilateral");

	}
	else if (a + b + c == 180)
	{
		if (a == b && a == c && b != c)
		{
			printf("Isosceles");
		}
		else if (a == c && a != b && b == c)
		{
			printf("Isosceles");
		}
		else (a != b && b != c && a != c)
		{
			printf("Scalene");
		}
	}
	else
		printf("Error");



	
	return 0;
}*/