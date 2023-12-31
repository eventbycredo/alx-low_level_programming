#include "main.h"

/**
 * p_operation - returns the natural square root of a number.
 * @n: input number
 * @c: iterator
 * Return: square root or -1
 */
int p_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		return (c);
		else
		return (-1);
	}
	return (0 + p_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (p_operation(n, 2));
}
