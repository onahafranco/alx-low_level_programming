#include "main.h"

/**
 * _isdigit - numbers 0 through 9
 * @c: number to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
    }
    else
	{
		return (0);
	}
}
