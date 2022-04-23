#include "main.h"
/**
 * main - Entry Point
 *
 *@_abs: print absolute value of in
 *
 *@n: input number as an integer
 *
 * Return:Always (0) success
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else if (n > 0)
{
return (n);
}
else
return (0);
}
