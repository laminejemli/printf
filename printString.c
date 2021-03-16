#include "holberton.h"
/**
 *  * _print_string - Prints a string.
 *   * @sl: specifiers list.
 *    *
 *     */
int printString(va_list sl)
{
	  int j;
	    char *s;

	      s = va_arg(sl, char *);
	        for (j = 0; s[j] != '\0'; j++)
			    _putchar(s[j]);
		  return (j);
}
