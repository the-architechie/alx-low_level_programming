#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: Array of characters
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		;
	}
	return (count);
}
