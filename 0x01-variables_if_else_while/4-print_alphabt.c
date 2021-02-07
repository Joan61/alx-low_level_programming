#include <stdio.h>
/**
*main - where execution starts
*Description: The program prints the alphabets a-z
*in lowercase except q and e
*Return: 0 if successful
**/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
else
{
putchar(ch);
ch++;
}
}
putchar('\n');
return (0);
}
