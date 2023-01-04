#include "main.h"

/**
 * _strstr - Finds the occurence of the substring needle in the string
 * haystack
 * @haystack: the string in which to find the needle string
 * @needle: the string to find in haystack
 * Return: Returns a pointer to the beginning of the located substring or NULL
 * if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag = 0;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(haystack + j) == *(needle + i))
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}

	if (flag)
		return (haystack + j);
	else
		return (NULL);
}
