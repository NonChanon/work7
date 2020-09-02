#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	printf("cost :");
	scanf("%d", &a);
	printf("pay :");
	scanf("%d", &b);
	if (b > a)
	{
		printf("change : %d", b - a);
	}
	else if (a == b)
	{
		printf("thank you");
	}
	else if (b < a)
	{
		printf("not enough");
	}
}