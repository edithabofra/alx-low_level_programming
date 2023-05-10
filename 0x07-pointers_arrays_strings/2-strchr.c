#include "main.h"
#include <stdio.h>

/**
 * _strchr - The entry point
 * @s: input value
 * @c: input value
 * Return: Always 0 on success
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
