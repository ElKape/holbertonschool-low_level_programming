#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char lowercase;
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);

	char uppercase;
	for (uppercase = 'a'; uppercase <= 'z'; uppercase++)
		putchar(uppercase);

	putchar('\n');
	return (0);
}
