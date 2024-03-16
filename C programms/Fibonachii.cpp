#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main()

{

	int num1 = 0, num2 = 1, num3;
	int x;
	printf("How many terms do you want? ");
	scanf("%d", &x);
	printf("\n0\t1\t");

	for (int count = 3; count <= x; count++)
	{
		num3 = num1 + num2;
		printf("%d\t", num3);
		num1 = num2;
		num2 = num3;
	}

	getchar();
	getchar();
}