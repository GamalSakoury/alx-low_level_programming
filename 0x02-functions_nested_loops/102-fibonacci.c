#include <stdio.h>

/**
  * main -Check the code.
  *
  * Return: 0 always.
  */

int main(void)
{
	int i;
	long int t1, t2;
	long int nextTerm;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	printf("%ld, %ld", t1, t2);
	for (i = 3; i <= 50; ++i)
	{
		printf(", %ld", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
