#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: 1st letter to be swapped
 * @b: The2nd integer to be swapped
 *
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
