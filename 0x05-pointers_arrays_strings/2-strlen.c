#include "holberton.h"
/**
*strlen - returns the length of a string
*@s: The string whose lenth you want
*
*Return: To the lenght of string s
**/
int _strlen(char *s)
{
char *b;
int length = 0;

b = s;
while (*b != '\0')
{
length++;
b++;
}
return(length);
}
