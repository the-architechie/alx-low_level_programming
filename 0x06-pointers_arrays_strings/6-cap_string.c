#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * seperators of words: space, tabulation, newline, , , ., ?, "
 * (, ), {, }
 * @str: the string whose words to capitalise
 * Return: Returns the capitalised string
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int flag = 1;
	char chars[] = {' ', '\t', '\n', ',', ';',  '.', '!', '?', '"',
			'(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		flag = 0;
		for (j = 0; j < 13; j++)
		{
			if (str[i] == chars[j])
			{
				flag = 1;
			}
		}
	}
	return (str);
}
