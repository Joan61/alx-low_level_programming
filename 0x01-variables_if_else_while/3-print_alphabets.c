#include <stdio.h>
/**
*main - Where execution starts
*
*Description: The program prints all the alphabets a-z
*in both lowercase and upper case.
*Return: 0 if successful
**/
int main(void)
{
char  ch  = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
char letter = 'A';
while (letter <= 'Z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
