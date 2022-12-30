#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: pointer to an array of char
 *
 * Return: Returns nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = 0;
	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - 1);
		*(s + len - 1) = temp;
		len--;
	}
}
