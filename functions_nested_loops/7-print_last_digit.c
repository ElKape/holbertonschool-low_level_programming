#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: is a number
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar(last_digit);
	return (last_digit);
}
