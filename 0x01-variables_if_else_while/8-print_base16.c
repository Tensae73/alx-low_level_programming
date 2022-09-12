#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Description: using the main function
 * this program prints "0123456789abcdef
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
