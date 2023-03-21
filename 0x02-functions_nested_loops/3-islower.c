#include "main.h"

/**
 * _islower - check main
 * @i: the current alphapet
 * Return: 0 or 1.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
