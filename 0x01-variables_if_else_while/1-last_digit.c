#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Print the last digit of a randomly generated number and whether it is greater the 5, less then 6, 0.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d ans is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, lastd);
	}
	return (0);
}
