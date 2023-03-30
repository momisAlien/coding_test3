#include <stdio.h>

int main(void) {
	int a, b, c;  {
		scanf("%d %d %d",&a, &b, &c);
		0 < a, b, c&& a, b, c < 7;
		if(a==b&&b==c&&c==a)
		{
			printf("%d", 10000+a*1000);
		}
		else if (a != b && a != c && b != c)
		{
			if(a > b && a > c)
			{
				printf("%d", a * 100);
			}
			else if (b > a && b > c)
			{
				printf("%d", b * 100);
			}
			else {
				printf("%d", c * 100);
			}
			
		}if (a == b && a != c) {
			printf("%d",a*100+1000);
		}
		else if (a == c && a != b) {
			printf("%d",a*100+1000);
		}
		else if (b == c && b != a) {
			printf("%d",b*100+1000);
		}
	}
	return 0;
}