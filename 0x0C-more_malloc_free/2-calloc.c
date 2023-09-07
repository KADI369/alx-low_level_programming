#include "main.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: number of elements in the array
 *@size: Size of each element in the array
 *
 *Return: Pointer to the allocated memory - NULL if nmemb or size is 0
 *	or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	void *mem;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	ptr = mem;

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (mem);

}
