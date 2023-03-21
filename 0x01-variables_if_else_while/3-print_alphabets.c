#include <stdio.h>
/**
 * main - A programming declaring a variable called n
 * to print the alphabets in lowercase and upper case
 * by using two for loop and three putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int A;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (A = 65; A <= 90; A++)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
