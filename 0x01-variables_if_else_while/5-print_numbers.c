#include <stdio.h>
/**
*main - where execution begins
*Description: The program printsall single digit numbers
*of base 10 starting from 0.
*Return: 0 if successful
**/
int main(void)
{
char num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
