#include "main.h"

/**
 * main - check the code
 *
 * Description: using the main function and print_alphabet function
 * this program prints "abcdefghijklmnopqrstuvwxyz
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
