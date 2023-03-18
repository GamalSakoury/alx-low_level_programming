#include<stdio.h>
/**
 * main - A program using sizeof function to print the number of bytes
 * Return: 0 (Success)
 */
int main(void)
{
	long long int a;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
