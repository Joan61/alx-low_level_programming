#include <stdio.h>
/**
*main - Entry point
*Description: The program should print numbers from 00 to 99
*Return: 0 is successful
**/
int main(void)
{
int num = 0;

while (num < 100)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 99)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
