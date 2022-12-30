#include "main.h"

/**
 * print_rev - prints a string, in reverse followed by a new line
 *@s: pointer to an array of chars(string)
 *
 * Return: Returns nothing
 */

void print_rev(char *s)
{
	int len;
	int count;

	count = 0;
	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
