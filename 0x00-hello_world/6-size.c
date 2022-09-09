#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints 
 */
int main(void)
{
	char c;
	int d;
	long cd;
	long long cdd;
	float f;

	printf("Size of a char: %ld byts(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(d));
	printf("Size of lond int: %ld byte(s)\n", sizeof(cd));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(cdd));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
