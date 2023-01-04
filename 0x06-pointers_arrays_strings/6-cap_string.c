#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * seperators of words: space, tabulation, newline, , , ., ?, "
 * (, ), {, }
 * @s: the string whose words to capitalise
 * Return: Returns the capitalised string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if(str[i]>='a' && str[i]<='z')
				 str[i] = str[i] - 32;
			continue;
		}
		if ((str[i] >= '\t' && str[i] <= '.')|| str[i] == ' ' || (str[i] >= ';' && str[i] <= '?') || (str[i] >= '{' && str[i] <= '}'))
		{
			i++;
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;

			}
			if (i == 0)
			{
				 if(str[i]>='a' && str[i]<='z')
					 str[i] = str[i] - 32;
				 continue;
			}
		}
	}
	return (str);
}
