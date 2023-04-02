#include <stdio.h>

int main(void) {
	int A, B, C;// A는 고정 B는 가변 C는 판매가격
	int k;//k는 판매 수 // C*K는 매출액
	int i; // 손익분기점 공식
	A, B, C < 2100000000; // 21억 미만
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	i = A / (1 - B / C);
	if (B < C)	{ // 손익분기점 생길경우
		i = A / (C - B);
		k = i + 1;//k=i이면 매출액과 비용이 같음
		printf("%d", k);
	}
	else//손익분기점이 생기지 않음
	{
		printf("-1");
	}

	return 0;
}