#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
