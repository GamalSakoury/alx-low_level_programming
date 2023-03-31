#include <stdio.h>

/**
  * main -Check the code.
  *
  * Return: 0 always.
  */

int main(void)
{
	int i, s;
	long int t1, t2;
	long int nextTerm;

	t1 = 1;
	t2 = 2;
	s = 0;
	nextTerm = t1 + t2;
	printf("%ld, %ld", t1, t2);
	for (i = 3; i <= 10; ++i)
	{
		printf(", %ld", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		if (nextTerm % 2 == 0)
			s = s + nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n%d\n", s + 2);

	return (0);
}
