#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* main - entry point function */

/*Description: prints only last digit of num stored in number n */

/*Return: always 0 (success)*/

int main(void)
{
	int n, q;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;

	printf("Last digit of %i is %i ", n, q);
	if (q > 5)
		printf("and is greater than 5\n");
	else if (q < 6 && q != 0)
		printf("and is less than 6 and not 0\n");
	else if (q == 0)
		printf("and is 0\n");
	return (0);
}
