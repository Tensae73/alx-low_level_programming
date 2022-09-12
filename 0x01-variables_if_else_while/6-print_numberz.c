#include <stdio.h>

/**
 * main - prints the numbers since 0 to 9
 *
 * Description: using the main function
 * this program prints "0123456789
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
