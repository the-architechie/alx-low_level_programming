#include "main.h"

/**
 * _strncpy - copies a string, should work exactly like strncpy
 * @dest: the buffer to copy the string to
 * @src: the string to copy to dest
 * @n: copy the string up to the nth byte
 * Return: returns the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	if (n)
	{
		while ((*(dest + i) = *(src + i)) && i < n - 1)
		{
			i++;
		}
	}
	return (dest);
}
