#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to an array of chars - a string
 * Return: returns nothing
 */

void puts_half(char *str)
{
	int len;
	int i;
	int pstn;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	pstn = (len + 1) / 2;

	for (i = pstn; i < len; i++)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
