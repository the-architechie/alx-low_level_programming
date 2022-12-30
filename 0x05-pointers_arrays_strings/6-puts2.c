#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first\n
 * character, followed by a new line
 * @str: pointer to an array of chars( string)
 * Return: returns nothing
 */

void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i = i + 2)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
