#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Description: using the main function
 * this program prints "012, 013, 014, 015, 016, 017, 018, 019, 023, ...
 * Return: 0
 */
int main(void)
{
	int i, p, m;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (p = 1 ; p <= 9 ; p++)
		{
			for (m = 2 ; m <= 9 ; m++)
			{
				if (m > p && p > i)
				{
					putchar(i + '0');
					putchar(p + '0');
					putchar(m + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
