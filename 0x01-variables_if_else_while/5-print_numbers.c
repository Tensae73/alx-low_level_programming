#include <stdio.h>

/**
 * main - print single base 10 digit starting from 0
 *
 * Description: using the main function
 * this program prints "0123456789
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 0 ; d < 10 ; d++)
	{
		printf("%d", d);
	}
	printf("\n");
	return (0);
}
