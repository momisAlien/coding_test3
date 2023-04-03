#include <stdio.h>
int main(void) {
	int n;// 정수
	int k;// 몇번째
	int i;// n의 약수
	int cnt=0; // 약수 숫자 세기
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) //1부터 시작  n까지
	{
			if (n% i == 0) //  n을 나눴을 때 나머지 0= n의약수
			{
				cnt++; //  
				
				
				if (cnt == k) 
					break; // // cnt랑 k가 같아 지면 끝
			
			}
			
	}
	if (i <= n) 
		printf("%d", i);
	else // i가 n가 크면 0출력
		printf("0");
	

	return 0;
}
