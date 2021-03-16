#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;
  
 
  len = _printf("Let's try to printf a simple sentence.\n");
  
   
  _printf("Character:[%c]\n", 'H');
 
  _printf("Length:[%d, %i]\n", len, len);
  
  _printf("Negative:[%d]\n", -762534);
  
  len = _printf("Percent:[%%]\n");
  
  _printf("Len:[%d]\n", len);
  
  _printf("String:[%s]\n", "I am a string !");
  
  return (0);
 }
