#include "holberton.h"

/**
 * print_triangle - draws a triangle in terminal
 * @size: size of triangle to print
 * Return: void
 */

void print_triangle(int size)
{
	int fila, col;

	if (size > 0)
	{
		for (fila = 1; fila <= size; fila++)
		{
			for (col = 1; col <= size; col++)
			{
				if (col <= size - fila)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
