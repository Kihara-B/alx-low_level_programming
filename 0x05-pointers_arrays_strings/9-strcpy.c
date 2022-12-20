#include "main.h"

/**
 * main - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
return (dest);
}
