#include "main.h"

/**
 * print_square - Function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 * Return: null.
 */

void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar("\#");
				b++;
			}
			a++;
			b = 0;
			_putchar("\#");
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
