#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 *struct choose_right - choosing the right type
 *@type: the type to print
 *@func: func of the type to print
 */
typedef struct func_t
{
  char *c;
  int (*f)(va_list );
} func_t;

int _putchar(char c);
int _printf(const char *format, ...);
int printChar(va_list);
int printString(va_list);
int printPercent(va_list);
int printInteger(va_list);
#endif
