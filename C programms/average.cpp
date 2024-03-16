#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()

{
	int num1, num2, num3;
	float average;

	printf("Enter 3 Numbers");
		scanf("%d%d%d", &num1, &num2, &num3);

		average = (float)(num1 + num2 + num3) / 3;
		printf("%d + %d + %d = %.2f\n", num1, num2, num3, average);
		

		getchar();
		getchar();

  return 0;


}