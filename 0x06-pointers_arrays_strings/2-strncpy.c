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
	while ((*(dest + i) = *(src + i)) != '\0' && i < n)
	{
		i++;
	}
	while(i <= n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
