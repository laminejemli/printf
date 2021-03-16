#include "holberton.h"
#include <stdlib.h>

/**
 * _print_char - print charachter
 * @spec: specifiers
 * Return: int
 */
int printChar(va_list spec)
{
	_putchar(va_arg(spec, int));
	return (1);
}
