#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: using the main function
 * this program prints "00 01, 00 02, 00 03, 00 04, 00 05, 00 06, ...
 * Return: 0
 */
int main(void)
{
	int i, p;

	for (i = 0 ; i < 100 ; i++)
	{
		for (p = 1 ; p < 100 ; p++)
		{
			if (p > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
