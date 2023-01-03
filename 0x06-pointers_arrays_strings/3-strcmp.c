#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string 2
 * Return: return an integer less than, equal
 * to, or greater than zero if s1
 * (or the first n bytes thereof) is found,
 * respectively, to be less than, to match, or be greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
