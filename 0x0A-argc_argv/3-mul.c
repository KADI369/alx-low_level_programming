#include <stdio.h>
#include "main.h"

/**
 *main -  a program that multiplies two numbers.
 *@argc: count arguments
 *@argv:array of arguments
 *Return: Alwatys 0 (success).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
