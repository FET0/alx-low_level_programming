#include <stdio.h>
/**
 * main - Entry point
 *
 * description: code to print all the numbers of base 16 in lowercase
 *
 * Return: Always (0) Success
 */
int main (void)
{
int x = 48;
int y = 97;
do {
putchar(x++);
} while (x <= 57);
do {
putchar(y++);
} while (y <= 102);
putchar('\n');
return (0);
}
