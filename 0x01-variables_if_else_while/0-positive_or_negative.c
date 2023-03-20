#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A programming declaring a variable called n
 * checking if it is greater than 0 then it is positive
 * otherwise it is equal zero then it is 0
 * otherwise it is negative
 * return : 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
