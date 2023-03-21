#include <stdio.h>
/**
 * main - A programming declaring a variable called n
 * to print the alphabets in lowercase
 * by using a for loop and two putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 97;n <= 122; n++)
	{
		putchar(n);
	}
	return (0); 
}
