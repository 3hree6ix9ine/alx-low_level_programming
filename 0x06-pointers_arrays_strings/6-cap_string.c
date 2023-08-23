#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string par
 * Return: resulting string
 */

char *cap_string(char *str)
{
	int len = 0;

	while (str[++len])
	{
		while (!(str[len] >= 'a' && str[len] <= 'z'))
			len++;

		if (str[len - 1] == ' ' ||
				str[len - 1] == '\t' ||
				str[len - 1] == '\n' ||
				str[len - 1] == ',' ||
				str[len - 1] == ';' ||
				str[len - 1] == '.' ||
				str[len - 1] == '!' ||
				str[len - 1] == '?' ||
				str[len - 1] == '"' ||
				str[len - 1] == '(' ||
				str[len - 1] == ')' ||
				str[len - 1] == '{' ||
				str[len - 1] == '}')
		{
			str[len] -= 32;
		}
	}
	return (str);
}
