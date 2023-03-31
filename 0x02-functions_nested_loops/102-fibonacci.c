#include <stdio.h>

/**
  * main -Check the code.
  *
  * Return: 0 always.
  */

int main(void)
{
	int i;
	int t1, t2;
	int nextTerm;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	printf("%d, %d", t1, t2);
	for (i = 3; i <= 50; ++i)
	{
		printf(", %d", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
