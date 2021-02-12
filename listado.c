#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LAPS_PER_MILE 4
const int CURRENT_YEAR = 2021;
float miles_covered;
int laps_run, year_of_birth, current_age;
int main(void)
{
	/* Input data from user */
	printf("How many laps did you run: ");
	scanf("%d", &laps_run);
	printf("Enter your year of birth: ");
	scanf("%d", &year_of_birth);
	/* Perform conversions */
	miles_covered = laps_run / LAPS_PER_MILE;
	current_age = CURRENT_YEAR - year_of_birth;
	/* Display results on the screen */
	printf("\nYou ran %.2f miles.", miles_covered);
	printf("\nNot bad for someone turning %d this year!\n", current_age);

	return 0;
}