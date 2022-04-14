#include "main.h"
/**
 * print_sign - determines if the input number
 * greater, equal to, equal or less than zero,
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero, 0 is zero.
 * -1 is less than zero
 */

int print_sign(int n)
{
int a = 43, b = 45, c = 48;
if (n > 0)
{
_putchar(a);
return (1);
}
else if (n < 0)
{
_putchar(b);
return (-1);
}
else
{
_putchar(c);
return (0);
}
_putchar('\n');
}
