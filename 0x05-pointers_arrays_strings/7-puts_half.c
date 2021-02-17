#include "holberton.h"

/**
 *puts_half: the function that prints half of a string
 *@str: the string to be printed
 *
 *Description:
 *Return: void
 **/
void puts_half(char *str)
{
int length = 0;

while (*str != '\0')
{
length++;
str++;
}

if ((length % 2) == 0)
str -= (length / 2);
else
str -= ((length - 1) / 2);

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
