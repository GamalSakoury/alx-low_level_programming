#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A programming declaring a variable called n
 * to find the last digit I used the modulus
 * checking if it is greater than 5 then it is greater
 * otherwise it is equal zero then it is 0
 * otherwise it is less than 6 and not 0
 * return : 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and is greater\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}
