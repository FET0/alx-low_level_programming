#include "main.h"
/**
 * main - Entry Point
 *
 * description: print absolute value of int
 *
 * Return:Always (0) success
 */
int _abs(int n)
{
int n;
if (n < 0)
{
_putchar(-(n));
} else {
_putchar(n);
}
return (n);
}
