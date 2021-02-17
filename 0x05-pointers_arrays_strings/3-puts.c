#include "holberton.h"
/**
*_puts - prints a string to a new line
*str: string to be printed out
*
*Return: void
**/
void _puts(char *str)
{
int len_str;

len_str = 0;
while (str[len_str] != '\0')
{
  _putchar(str[len_str]);
len_str++;
}
_putchar('\n');
}
