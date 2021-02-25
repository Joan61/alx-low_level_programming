#include "holberton.h"

/**
 *_strcmp - compares two strings
 *
 *@s1: String 1
 *@s2: string 2
 *Return: int
 **/
int _strcmp(char *s1, char *s2)
{
while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0')
{
s1++;
s2++;
}

if ((*s1 == '\0') && (*s2 == '\0'))
return (0);
else if (*s1 > *s2)
return ((int)(*s1 - *s2));
else
return ((int)(*s1 - *s2));
}
