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
	int sign[2400];

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}


	res = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			sign[i] = -1;
		if ((s[i] <= '9') && (s[i] >= '0'))
		{
			res = res * 10 + s[i] - '0';

		}
	}
	for (i = 0; sign[i] != '\0'; i++)
	{
		sign[i] = sign[i - 1] * sign[i];
	}
	return (res * sign[0]);
}
