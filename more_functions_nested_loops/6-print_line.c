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

	if (n <= 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
