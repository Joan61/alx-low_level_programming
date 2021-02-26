#include "holberton.h"

/**
*cap_string - function that will capitalize all words
*of a string
*@s: The string to be manipulated
*Return: the string
**/
char *cap_string(char *)
{
char *origin = str;
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
if (*str == *origin ||
*(str - 1) == ' ' ||
*(str - 1) == '\t' ||
*(str - 1) == '\n' ||
*(str - 1) == ',' ||
*(str - 1) == ';' ||
*(str - 1) == '.' ||
*(str - 1) == '!' ||
*(str - 1) == '?' ||
*(str - 1) == '"' ||
*(str - 1) == '(' ||
*(str - 1) == ')' ||
*(str - 1) == '{' ||
*(str - 1) == '}')
*(str = *str - 32;
str++;
}
return (origin);
}
