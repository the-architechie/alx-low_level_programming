#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: the string to be encoded
 * Return: returns the encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char s[] = "abcdefghijklm";
	char s2[] = "nopqrstuvwxyz";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == s[j] || str[i] == s[j] - 32)
				str[i] += 13;
			else if (str[i] == s2[j] || str[i] == s2[j] - 32)
				str[i] -= 13;
		}
	}
	return (str);
}
