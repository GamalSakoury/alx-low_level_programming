#include <stdio.h>
/**
 * main - A programming declaring a variable called n
 * to print the alphabets in lowercase in a reverse order
 * by using a for loop and two putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
