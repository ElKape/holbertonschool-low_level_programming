#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: null
 */
void print_alphabet(void)
{
char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
