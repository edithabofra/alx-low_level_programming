#include "main.h"

/**
 * _memset - Point of entry
 * @s: destination pointed at
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 on Success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
