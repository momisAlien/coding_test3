#include <stdio.h>
int main(void){
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	if (s + k + h >= 100)// ������ ���� 100���� ũ��
	{
		printf("OK");
		s != k != h; // s,k,h�� ������ ��� �ٸ���
			
	}
	else {
		if (s > h && k > h) // h�� ���� ���� ���
		{
			printf("Hanyang");
		}
		else if (k > s && h > s) //s�� ���� ���� ���
		{
			printf("Soongsil");
		}
		else if(s > k&&h > k) // k�� ���� ���� ���
		{
			printf("Korea");

		}
	}

	return 0;
}