#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: the number to search
 *@index: is the index, starting from 0 of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
