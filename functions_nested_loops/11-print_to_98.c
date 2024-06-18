#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: The number to begin counting at.
 * Return: null.
 */

void print_to_98(int n)
{
	if (n < 98)
	{	
		for ( ; n <= 98; n++)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
		printf("\n");
	}
	else
	{
		for ( ; n >= 98; n--)
		{
			if (n == 98)
				printf("%i", n);
			else
				printf("%i, ", n);
		}
		printf("\n");
	}
}
