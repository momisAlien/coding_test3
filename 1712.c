#include <stdio.h>

int main(void) {
	int A, B, C;// A�� ���� B�� ���� C�� �ǸŰ���
	int k;//k�� �Ǹ� �� // C*K�� �����
	int i; // ���ͺб��� ����
	A, B, C < 2100000000; // 21�� �̸�
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	i = A / (1 - B / C);
	if (B < C)	{ // ���ͺб��� ������
		i = A / (C - B);
		k = i + 1;//k=i�̸� ����װ� ����� ����
		printf("%d", k);
	}
	else//���ͺб����� ������ ����
	{
		printf("-1");
	}

	return 0;
}