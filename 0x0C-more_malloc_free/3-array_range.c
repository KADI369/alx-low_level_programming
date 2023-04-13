#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers from min to max
 *@min: the starting integer value
 *@max: the ending integer value
 *
 *Return: pointer to the newly created array or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;


	return (arr);
}
