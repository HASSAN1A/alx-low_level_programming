#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int largo, espacio;

	if (n > 0)
	{
		for (largo = 0; largo < n; largo++)
		{
			for (espacio = 0; espacio < largo; espacio++)
				_putchar(' ');
			_putchar('\\');

			if (largo == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
