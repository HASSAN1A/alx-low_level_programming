#include "holberton.h"

/**
 * _strncat - Entry point
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i])
i++;

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
