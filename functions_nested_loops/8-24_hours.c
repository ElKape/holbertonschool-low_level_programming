#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hora, minuto;

	for (hora = 0; hora <= 23; hora++)
	{
		for (minuto = 0; minuto <= 59; minuto++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora / 10) + '0');
			_putchar(':');
			_putchar((minuto / 10) + '0');
			_putchar((minuto / 10) + '0');
			_putchar('\n');
		}
}
