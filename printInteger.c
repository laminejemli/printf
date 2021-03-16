#include "holberton.h"

/**
 * printInteger - prints an integer.
 * @n: list.
 * Return: integer's digits number.
 */

int printInteger(va_list n)
{
	int s = va_arg(n, int), c = 0;
	unsigned int b = 1;
	int a;

	if (s < 0)
	{
		s *= -1;
		_putchar('-');
		c++;
	}
	a = s % 10;
	s /= 10;
	if (s == 0)
		_putchar(a + '0');
	else
	{
		while (s / b >= 10)
			b *= 10;
		for (; b >= 1; b /= 10)
		{
			_putchar((s / b) + '0');
			c++;
			s %= b;
		}
		_putchar(a + '0');
	}
	c++;
	return (c);
}
