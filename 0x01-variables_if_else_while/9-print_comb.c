#include<stdio.h>
/**
 * main - Entry Point
 *
 * description: to print all possible combination of single digit numbers in ascending order
 *
 * Return: Always (0) Success
 */
int main(void)
{
int x = 48, y = 44, z = 32;
do
{
putchar(x++);
putchar(y);
putchar(z);
} while (x <= 57);
putchar('\n');
return (0);
}
