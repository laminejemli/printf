#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - produce output
 * @format: String
 * Return: int
 */
int _printf(const char *format, ...)
{
  int i = 0,j, b, a;
  va_list obj;

  func_t mind[] = {
    {"c", printChar},
    {"i", printInteger},
    {"d", printInteger},
    {"s", printString},
    {"%", printPercent},
    {NULL, NULL},
  };

  va_start(obj, format);

  b = 0;
  i = 0;
  while (format[i] != '\0' && format != NULL)
  {
    if (format[i] == '%')
      {

	j= 0;
	while(mind[j].f)
	  {
	    if (format[i + 1] == (*(mind[j].c)))
	      {
		b += mind[j].f(obj);
		a = 1;
	      }
	    j++;
	  }
	if (a == 0 && format[i + 1] != '\0')
	  {
	    _putchar(format[i]);
	    _putchar(format[i + 1]);
	    b += 2;
	  }
	else if (a == 0 && format[i + 1] == '\0')
	  return (-1);
	i++;
      }
    else
      {
	_putchar(format[i]);
	b++;
      }
    i++;
  }
  va_end(obj);
  return (b);
}
