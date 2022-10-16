#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - printing reverse alphabet
 * Return: Always 0
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
		putchar(chr);
	putchar('\n');

	return (0);
}
