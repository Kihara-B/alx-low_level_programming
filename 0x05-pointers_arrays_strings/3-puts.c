#include "main.h"

/**
 * main - Prints a string to stdout.
 *
 *Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
