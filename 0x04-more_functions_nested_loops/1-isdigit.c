#include "main.h"

/**
 * main : isdigit -checks for a digit
 *
 * @x: the number to be checked
 *
 * Return: 1 for digit or 0 for not digit
 */

int _isdigit(int c)
{
	if (c >= 00 && c <= 9)
	{
		return (1);
	}
	return (0);
}
