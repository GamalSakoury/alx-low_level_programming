#include <stdio.h>
/**
 * main - A programming declaring a variable called n
 * to print the numbers from 0 to 9 followed by a comma
 * by using a for loop and putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
