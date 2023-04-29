#include "main.h"

/**
 * _isupper - Checks for uppercase
 * @x: The number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	return (0);
}
