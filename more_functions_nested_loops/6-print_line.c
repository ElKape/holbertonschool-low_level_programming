#include "main.h"

/**
 * print_line - Function that that draws a straight line in the terminal.
 *
 * @a: number
 * Return: null.
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
