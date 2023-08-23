#include "main.h"

/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string
 *Return: encoded string
 */

char *rot13(char *s)
{
	int m, w;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (w = 0; a[w] != '\0'; w++)
		{
			if (s[m] == a[w])
			{
				s[m] = b[w];
				break;
			}
		}
	}

	return (s);
}

