#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		if (cr != 'e' && cr != 'q')
			putchar(cr);
	}

	putchar('\n');

	return (0);
}
