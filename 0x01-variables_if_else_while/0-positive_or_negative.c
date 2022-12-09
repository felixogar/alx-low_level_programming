#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* main - Entry point */
/* Description: decides if a random number is odd or even */
/* Return: Always 0 (Success) */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
