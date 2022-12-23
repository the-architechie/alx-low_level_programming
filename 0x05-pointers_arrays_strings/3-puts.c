#include "main.h"

/**
 * _puts - prints a string
 * @str: Pointer to an array of chars - string
 *
 * Return: Returns Nothing
 */

void _puts(char *str)
{
	int i; /* Counter to keep track of the position of the characters */

	for (i = 0; *(str+i) != '\0'; i++)
	{
		_putchar(*(str+i));
	}
	_putchar('\n');
}
