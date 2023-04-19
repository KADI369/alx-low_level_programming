#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - Returns the sum of two numbers
 *@a: first number
 *@b: second number
 *
 * Return: the sum of a and b.
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division of numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division of a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
