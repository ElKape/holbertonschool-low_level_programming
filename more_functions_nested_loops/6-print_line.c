#include "main.h"

/**
 * print_line - Function that that draws a straight line in the terminal.
 *
 * @x: number of times
 * Return: null.
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
		{
			if (n <= 0)
			_putchar('\n');
		}
	_putchar('\n');
}
