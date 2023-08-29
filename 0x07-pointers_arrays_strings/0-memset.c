#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
