#include "holberton.h"
/**
*string_toupper - changes all lowercase letters of
*a string to uppercase
*@str: string to change
*
*Return: string to uppercase
**/
char *string_toupper(char *str)
{
char *origin = str;

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
str++;
}
return (origin);
}
