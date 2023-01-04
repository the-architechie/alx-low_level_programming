#include "main.h"

/**
 * _memset - fills up the memory with a constant byte
 * @s: Pointer to an array of chars
 * @b: the chars to fill up the area pointed to by s
 * @n: the n bytes of the memory to be filled with byte b
 * Return: the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
