#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: Returns the resulting string
 */

char *leet(char *str)
{
	int i;
	int j = 0;

	char c[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {4, 3, 0, 7, 1};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == c[j] || str[i] == c[j] - 32)
			{
				str[i] = nums[j] + '0';
			}
		}
	}
	return (str);
}
