#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Main - Calculates if a random number is negative, positive or zero.
 * Return - It returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0) 
	{
		printf ("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf ("%d is negative\n", n);
	}
	else (n = 0)
	{
		printf ("%d is zero\n", n);
	}
	return (0);
}