#include <stdio.h>

/**
 * main - print alphabet in desending order
 *
 * Description: using the main function
 * this program print "zyxwvutsrqponmlkjihgfedcba
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
