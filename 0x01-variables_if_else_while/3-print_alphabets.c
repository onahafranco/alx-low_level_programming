#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);

	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);

	putchar('\n');

	return (0);
}
