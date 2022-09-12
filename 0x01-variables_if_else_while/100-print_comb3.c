#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Description: using the main function
 * this program print "01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, ...
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
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
