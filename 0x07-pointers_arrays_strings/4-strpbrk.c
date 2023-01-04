#include "main.h"
/**
 * _strpbrk - locates the first occurrence in a string s of any bytes
 * in the string accept
 * @s: the main string in which to search the occurrence accept
 * @accept: the string containing the set of bytes to check in s
 * Return: Returns a pointer to the byte in s that matches one of the bytes
 * in accept or NULL is no such bytes is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	if (flag)
	{
		return (s + i);
	}
	else
		return (NULL);
}
