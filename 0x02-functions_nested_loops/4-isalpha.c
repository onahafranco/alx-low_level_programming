#include "main.h"

/**
 * _isalpha - checking for lower and upper case alphabets only
 * Return: 1 if alphabet is lower or upper case otherwise return 0
 * @c: checking for cahr c
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
