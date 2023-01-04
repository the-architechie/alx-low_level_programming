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
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
