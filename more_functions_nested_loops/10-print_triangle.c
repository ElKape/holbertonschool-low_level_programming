#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle
 * Return: null.
 */

void print_triangle(int size)
{
	int i, j;
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
	{
	putchar(' ');
	}
	for (j = 1; j <= i; j++)
	{
		putchar('#');
	}
	putchar('\n');
	}
}