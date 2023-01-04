#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: the string in which to locate a char
 * @c: The string to locate
 * Return:  Returns pointer to first occurence of the char or NUll
 * if the string is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	int flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		return (s + i);
	else
		return (NULL);
}
