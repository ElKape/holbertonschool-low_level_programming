#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
 * Return: Always 0.
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;
		}
		_putchar('\n');
	}
}
