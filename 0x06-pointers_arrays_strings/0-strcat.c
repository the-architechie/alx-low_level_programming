#include "main.h"

/**
 * _strcat - Appends src to dest, overwriting the terminating null byte
 * at the end of dest then adding a terminating null byte at the end of the src
 * @dest: pointer to an array of chars(destination string)
 * @src: Pointer to an array of chars(source string)
 * Return: Returns a pointer to dest(new string)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
/*	int count; */

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++; /* the length of dest */
	}
	j = 0;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);

}
