#include "main.h"

/**
 *_strchr - Returns a pointer to the first occurrence
 *@s:string to target
 *@c:character to target
 *Return: returns pointer to first occcurence of char
 *
 *if c is not found - NULL.
 */

char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
