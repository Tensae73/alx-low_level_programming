#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Description: using the main function
 * this program print "01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <=9 ; i++)
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
