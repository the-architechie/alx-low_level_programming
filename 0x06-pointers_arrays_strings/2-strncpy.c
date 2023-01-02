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


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
