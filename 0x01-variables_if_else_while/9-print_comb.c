#include <stdio.h>
/**
*main - entry point.
*Description: The program should print all possible combinations
*of single digit numbers
*Return: 0 if successful
**/
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
