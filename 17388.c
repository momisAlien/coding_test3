#include <stdio.h>
int main(void){
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	if (s + k + h >= 100)// 점수의 합이 100보다 크다
	{
		printf("OK");
		s != k != h; // s,k,h의 점수는 모두 다르다
			
	}
	else {
		if (s > h && k > h) // h가 가장 작은 경우
		{
			printf("Hanyang");
		}
		else if (k > s && h > s) //s가 가장 작은 경우
		{
			printf("Soongsil");
		}
		else if(s > k&&h > k) // k가 가장 작은 경우
		{
			printf("Korea");

		}
	}

	return 0;
}