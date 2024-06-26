#include "main.h"
#include <stdio.h>

/**
 * main - The "Fizz-Buzz test" is an interview question designed to help filter
 * out the 99.5% of programming job candidates who can't seem to program their
 * way out of a wet paper bag.
 *
 * Return: null.
 */

int main(void)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
