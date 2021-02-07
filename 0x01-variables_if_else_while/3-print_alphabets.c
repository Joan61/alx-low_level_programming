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
char  letter  = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
