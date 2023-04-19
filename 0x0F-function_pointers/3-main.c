#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *main - check the code
 *@argc: argument count.
 *@argv: argument vector
 *
 *Return: always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int arg1, arg2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	op = argv[2];
	arg2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && arg2 == 0) ||
	    (*op == '%' && arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(arg1, arg2));

	return (0);
}
