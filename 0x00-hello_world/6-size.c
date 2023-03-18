#include<stdio.h>
/**
 * main - A program using printf and sizeof function to print the number of bytes
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n",sizeof(char));
	printf("Size of a int: %d byte(s)\n",sizeof(int));
	printf("Size of a long int: %ld byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %f byte(s)\n",sizeof(float));
	return (0);
}
