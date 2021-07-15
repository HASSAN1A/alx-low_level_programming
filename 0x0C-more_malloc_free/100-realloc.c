#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _realloc - entry point
 * @ptr: void variable
 * @viejo: unsigned int variable
 * @nuevo: unsigned int variable
 *
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int viejo, unsigned int nuevo)
{
	char *ar;
	unsigned int i = 0;

	if (nuevo == viejo)
		return (ptr);
	if (nuevo == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ar = malloc(nuevo);
		if (!ar)
			return (NULL);
		return (ar);
	}
	ar = malloc(nuevo);
	if (ar == NULL)
		return (NULL);
	while (i < viejo && i < nuevo)
	{
		ar[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (ar);
}
