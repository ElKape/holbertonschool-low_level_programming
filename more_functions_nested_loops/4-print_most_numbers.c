#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: null.
 */

void print_most_numbers(void)
{
	char c;

	while (c != '2' || c != '4')
	{
	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	}
	_putchar('\n');
}
