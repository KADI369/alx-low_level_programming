#include "main.h"

/**
 *flip_bits - gets the number of bits to flip to get from n to m.
 *@n: number to initial
 *@m: number to finish
 *
 *Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	int count = 0;

	while (xor_result != 0)
	{
		if (xor_result & 1)
			count++;
		{
			xor_result >>= 1;
		}
	}

	return (count);
}
