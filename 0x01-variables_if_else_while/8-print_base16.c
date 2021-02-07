#include <stdio.h>
/**
*main - where execution starts
*Description: The program prints all the numbers of
*of base 16 in lowercase
*Return: 0 if successful
**/
int main(void)
{
char num = '0';
char letter = 'a';

while (num <= '9')
{
putchar(num);
num++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
