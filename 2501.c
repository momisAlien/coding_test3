#include <stdio.h>
int main(void) {
	int n;// ����
	int k;// ���°
	int i;// n�� ���
	int cnt=0;
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) //1���� ����  n����
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