#include <stdio.h>
int main(void) {
	int n;// 정수
	int k;// 몇번째
	int i;// n의 약수
	int cnt=0;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) //1부터 시작  n까지
	{
			if (n% i == 0)
			{
				cnt++;
				
				
				if (cnt == k)
					break;
			
			}
			
	}
	if (i <= n)
		printf("%d", i);
	else
		printf("0");
	

	return 0;
}