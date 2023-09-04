#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function returns a pointer to a new string
 *@str: string
 *Return: If str == NULL or insufficient memory is available - NULL
 *	otherwise - return a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';
		return (new_str);
}
