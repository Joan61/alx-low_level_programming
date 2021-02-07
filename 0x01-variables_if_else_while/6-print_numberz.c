#include <stdio.h>
/**
*main - where execution starts
*Description: The program prints all single digit numbers
*of base 10 from 0 without using variable type char.
*Return: 0 if successful
**/
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
