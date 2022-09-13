#include "main.h"

/**
 * print_alphabet - function to print abc
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
