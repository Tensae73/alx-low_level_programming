#include <stdio.h>

/**
 * main - print alphabet in lowercase except e and q
 *
 * Description: using the main function
 * this program prints "abcdfghijklmnoprstuvwxyz
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
