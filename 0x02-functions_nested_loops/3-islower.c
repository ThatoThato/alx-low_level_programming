#include "main.h"

/**
 * _islower - check
 * @c: the character
 * Return: 1 if letter is lowercase, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
