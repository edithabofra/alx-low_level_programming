#include "main.h"

/**
 * main : isdigit -checks for a digit
 *
 * @x: the number to be checked
 *
 * Return: 1 for digit or 0 for not digit
 */

init _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
