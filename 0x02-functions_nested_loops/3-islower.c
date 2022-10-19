#include "main.h"

/**
 * _islower - print only c
 * Return: 1 for lowcase char otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
