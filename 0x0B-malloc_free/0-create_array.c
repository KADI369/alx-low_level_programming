#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *@size: size of array
 *@c: specific character to initialize
 *Return: NULL if size = 0 or the function fails
 *	otherwize return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
		return (NULL);

	r = malloc(sizeof(c) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		r[i] = c;
	return (r);
}
