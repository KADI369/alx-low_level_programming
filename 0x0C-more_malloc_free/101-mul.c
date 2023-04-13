#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, n1 = 1, n2 = 1;

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] != '0')
		{
			n2 = 0;
			break;
		}

	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - set memery to zero in a new array
 * @ar: char array.
 * @len: length of the char array.
 *
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		ar[i] = '0';
	ar[len] = '\0';
	return (ar);
}

/**
 * _checknum - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @n: row of the array.
 *
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int l;

	for (l = 0; argv[n][l]; l++)
		if (!isdigit(argv[n][l]))
		{
			printf("Error\n");
			exit(98);
		}

	return (l);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int l1, l2, len_out, add, addl, i, j, k, carry;
	char *out;

	if (argc != 3)
		printf("Error\n"), exit(98);
	l1 = _checknum(argv, 1), l2 = _checknum(argv, 2);
	_is_zero(argv), len_out = l1 + l2, out = malloc(len_out + 1);
	if (out == NULL)
		printf("Error\n"), exit(98);
	out = _initialize_array(out, len_out);
	k = len_out - 1, i = l1 - 1, j = l2 - 1, carry = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (out[k] - '0') + addl;
				if (add > 9)
					out[k - 1] = (add / 10) + '0';
				out[k] = (add % 10) + '0';
			}
			i = l1 - 1, j--, addl = 0, carry++, k = len_out - (1 + carry);
		}
		if (j < 0)
		{
			if (out[0] != '0')
				break;
			len_out--;
			free(out), out = malloc(len_out + 1), out = _initialize_array(out, len_out);
			k = len_out - 1, i = l1 - 1, j = l2 - 1, carry = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (out[k] - '0') + addl;
			addl = add / 10, out[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", out);
	return (0);
}
