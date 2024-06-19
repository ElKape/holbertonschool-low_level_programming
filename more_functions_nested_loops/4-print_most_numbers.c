#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9, followed
 * by a new line.
 *
 * Return: null.
 */

void print_most_numbers(void)
{
	int n;
	while (n != 2 || n != 4)
	{
		for (n = 0; n <= 9; n++)
		_putchar(n);
	}
	_putchar('\n');
}
