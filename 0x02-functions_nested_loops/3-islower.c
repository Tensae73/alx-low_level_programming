#include "main.h"

/**
 * _islower - function to check for lowercase character
 *
 * @c: is the int that will use for the argument of the function
 * Decription: using _islower function
 * this program prints "
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
