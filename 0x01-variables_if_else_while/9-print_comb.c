#include<stdio.h>
/**
 * main - Entry Point
 *
 * description: print possible combination of single digit numbers
 *
 * Return: Always (0) Success
 */
int main(void)
{
int x = 48, y = 44, z = 32;
do {
putchar(x++);
if (x <= 57)
{
putchar(y);
putchar(z);
}
} while (x <= 57);
putchar('\n');
return (0);
}
