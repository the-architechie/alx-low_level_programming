#include "main.h"

/**
 * _strncat - Similar to strcat except that it will use at
 *  most n byted from src
 * and src does not need to be null byte terminated
 * @dest: Destination string pointer
 * @src: Pointer to the source string
 * @n: n bytes from src
 * Return: returns the resulting pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int j;

	len = 0;
	while (*(dest + len) != '\0')
	{
		len++;
	}

	j = 0;
	if (n > 0)
	{
		while ((*(dest + len) = *(src + j)) && j < n - 1)
		{
			len++;
			j++;
		}
	}
	return (dest);
}
