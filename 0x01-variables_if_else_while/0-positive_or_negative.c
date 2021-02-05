#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - where execution starts
*
*Description: The program will assign a random number to a variable*
*output should be either positive, negative, or zero
*Return: 0 if successful
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d if negative", n);
else
printf("%d is zero", n);

putchar('\n');
return (0);
}
