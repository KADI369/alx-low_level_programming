#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: argument count
 *@av: argument vector
 *
 *Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str, *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	p = str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			*p++ = av[i][j];
		*p++ = '\n';
	}

	return (str);
}
