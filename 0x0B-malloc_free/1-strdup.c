#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a new string
 *@str: string
 *Return: NULL if str = NULL or if insufficient memory is available
 *	otherwise return a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *strong;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		strong = malloc(sizeof(char) * (i + 1));

	if (strong == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strong[j] = str[j];

	return (strong);
}
