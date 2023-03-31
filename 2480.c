#include <stdio.h>

int main(void) {
	int a, b, c;  {
		scanf("%d %d %d",&a, &b, &c); // 주사위 3개 변수 지정
		0 < a, b, c&& a, b, c < 7; // 주사위 1~6까지 범위 지정
		if(a==b&&b==c&&c==a) // 1) 주사위 3개가 모두 같은 수 
		{
			printf("%d", 10000+a*1000);
		}
		else if (a != b && a != c && b != c) // 주사위 3개가 모두 다 다른 수 
		{
			if(a > b && a > c) // 1) a가 가장 큰 경우 (b랑 c의 대소 불필요)
			{
				printf("%d", a * 100);
			}
			else if (b > a && b > c) // 2) b가 가장 큰 경우 (a랑 c의 대소 불필요) 
			{
				printf("%d", b * 100);
			}
			else {                         // else 쓴 이유 : a,b,c 모두가 다른 수 이기 때문에 남은 경우는 c가 가장 큰 경우 뿐
				printf("%d", c * 100); // 3) c가 가장 큰경우 a,b 의 대소 불필요, 
			}
			
		}if (a == b && a != c) // a=b인 경우 
		{
			printf("%d",a*100+1000);
		}
		else if (a == c && a != b) // a=c인 경우
		{
			printf("%d",a*100+1000);
		}
		else if (b == c && b != a) // b=c인 경우
		{
			printf("%d",b*100+1000);
		}
	}
	return 0;
}
