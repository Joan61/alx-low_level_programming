#include <stdio.h>
/**
*main - where execution starts
*Description:  The program will print all the alphabets
*a-z in lowercase in reverse
*Return: 0 if successful.
**/
int main(void)
{
char letter = 'z';

while (letter <= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
