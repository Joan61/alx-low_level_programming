#include "holberton.h"
/**
*swap_int - swap two variables
*@a: Integer 1
*@b: Integer 2
*Return: 0 if successful
**/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
