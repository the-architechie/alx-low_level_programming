#include "main.h"

/**
 * _memcpy - Copies n bytes from memort area src to dest
 * @dest: the destination where bytes are copied to
 * @src: the source string from which the bytes are copied
 * @n: the number of bytes to be copied
 * Return: the resulting string dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
