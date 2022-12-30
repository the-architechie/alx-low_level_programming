#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: the string to be converted
 * Return: returns an integer
 */

int _atoi(char *s)
{
	int len;
	int i;
	int res;
	int sign;

	sign = 1;
	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}


	res = 0;
	for (i = 0; i < len; i++)
	{
		if ((s[i] <= '9') && (s[i] >= '0'))
		{
			if (s[i - 1] == '-')
				sign = -1;

			res = res * 10 + s[i] - '0';
		}
	}
	return (res * sign);
}
