#include <stdio.h>
#include "holberton.h"
/**
*rev_string: Function that reverses a string
*@s: string to be reversed
*
*Return: void
**/
void rev_string(char *s)
{
int index = 0;
int revindex = 0;
int temp;
char *origin = s;

while(*s != '\0')
{
revindex++;
s++;
}
revindex--;

while(index <= revindex)
{
temp = *(origin + index);
*(origin + index) = *(origin + revindex);
*(origin + revindex) = temp;
index++;
revindex--;
}
}
