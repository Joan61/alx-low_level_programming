#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main -where execution starts
*
*Description: program will choose  random number to print the last digit
*of the variable is it is greater than 5, zero, or less than 6 and not 0.
*Return: 0 if successful
**/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) == 0)
printf("Last digit of %d is %d and is zero 5", n, n % 10);
else if ((n % 10) > 5)
printf("Last digit of %d is %d and is greater than 5", n, n % 10);
else
printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);

putchar('\n');
return (0);
}
