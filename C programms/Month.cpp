#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main()

{

	int month, year;
	int days = 0;
	
	printf("Enter Month (1-12)");
	scanf("%d", &month);

		printf("Enter Year");
		scanf("%d", &year);

		switch (month) {
		case 4: case 6: case 9: case 11:
			days = 30;
			break;
		case 2:
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
				days = 29;
			else
				days = 30;
			break;
		default:
			days = 31;

		}

		print("Number of days in month %d is %d\n", month, days);

	getchar();
	getchar();
}
