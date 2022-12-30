#include "main.h"

/**
 * _strcpy - copies the string copied to by src, including the terminating\n
 * null byte to the buffer pointed to by dest
 * @dest: pointer to string buffer to which src string is copied
 * @src: pointer to the original string which is to be copied to dest
 * Return: returns the value pointed to dest
 */

int _strlen(char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	return (len);
}

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src) + 1;

	/*char dest[len];*/

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
