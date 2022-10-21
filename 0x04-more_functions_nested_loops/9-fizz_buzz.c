#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100; print
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of 3&5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %i", i);
	}
	printf("\n");
	return (0);
}
