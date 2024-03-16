#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define EXAMS 3
#define STUDENTS 4



int main()
{
	int exams[STUDENTS][EXAMS];
	float averages[STUDENTS];
	int sum;


	//input the results	
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("Input the %d results for student %d \n", EXAMS, (i + 1));
		for (int j = 0; j < EXAMS; j++)
			scanf("%d", &exams[i][j]);
	}

	printf("\n\n");

	//display the results	
	for (int i = 0; i < STUDENTS; i++)
	{
		printf("The %d results for student %d are...\n", EXAMS, (i + 1));
		for (int j = 0; j < EXAMS; j++)
			printf("%d%% ", exams[i][j]);
		printf("\n");
	}

	//calculate average
	for (int i = 0; i < STUDENTS; i++)
	{
		sum = 0;
		for (int j = 0; j < EXAMS; j++)
			sum += exams[i][j];
		averages[i] = (float)sum / EXAMS;

	}
	for (int i = 0; i < STUDENTS; i++) {

		printf("Average result for student %d is %.2f\n", i + 1, averages[i]);

	}

	getchar();
	getchar();
}