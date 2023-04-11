#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a new string
 *@str: string
 *Return: return a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		new_str = (char *)malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		new_str[j] = str[j];

	return (new_str);
}
