#include "main.h"

/**
 * _islower - check only lower case char
 * Return: 1 for lowcase char otherwise 0
 * @c: checking for c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
