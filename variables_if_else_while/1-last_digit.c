#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * variables_if_else_while - if
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 5)
			printf("Last digit of %i and is greater than 5\n", n);
		if (n == 0)
			printf("Last digit of %i and is 0\n", n);
		if (n < 6)
			printf("Last digit of %i and is less than 6 and not 0\n", n);

	return (0);
}
