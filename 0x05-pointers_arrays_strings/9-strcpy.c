#include "main.h"

/**
 * main - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
