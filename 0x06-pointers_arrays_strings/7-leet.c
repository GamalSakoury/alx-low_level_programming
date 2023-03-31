#include "main.h"

/**
  * *leet - A function that encodes a string into 1337.
  * @s: parameter array.
  *
  * Return: s.
  */

char *leet(char *s)
{
	int i, j;
	char arr[5] = {'a', 'e', 'o', 't', 'l'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == arr[j]) || (s[i] == (arr[j] - 32)))
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
