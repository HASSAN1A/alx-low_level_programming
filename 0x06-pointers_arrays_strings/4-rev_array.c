#include "holberton.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, aux, l;

	l = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		aux = a[l];
		a[l] = a[i];
		a[i] = aux;
		l--;
	}
}
