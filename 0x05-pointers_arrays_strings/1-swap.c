#include "main.h"

/**
 * main - Swaps the values of two integers.
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
