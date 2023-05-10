#include <stdio.h>

/**
 * _strspn - Entry point
 *  @s: input
 *  @accept: input
 *  Return: Always 0 on sucess
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				check = 1;
				break;
			}
		}
		if (check == 0)
			break;
	}

	return (0);
}
