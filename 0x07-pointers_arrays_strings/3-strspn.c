#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to evaluate
 * @accept: the substring to evaluate against s
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of byes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;

			}
		}
		if (*(s + i) == ' ')
			break;
	}
	return (count);
}
