#include "holberton.h"

/**
 * leet - Encodes a sing to 1337.
 * @s: The sing to be encoded.
 *
 * Return: A pointer to the encoded sing.
 */
char *leet(char *s)
{
	int i = 0, i2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i] == leet[i2] ||
			    s[i] - 32 == leet[i2])
				s[i] = i2 + '0';
		}

		i++;
	}

	return (s);
}
