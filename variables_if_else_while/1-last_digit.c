#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Positive anything is better than negative nothing
 * Return: 0
*/

int main(void)
{
	int n;
	int u_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u_dig = n % 10;
		if (n > 5)
			printf("Last digit of %i is %i and is greater than 5\n", n, u_dig);
		if (n == 0)
			printf("Last digit of %i is %i and is 0\n", n, u_dig);
		if (n < 6)
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, u_dig);

	return (0);
}
