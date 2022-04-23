#include "main.h"
/**
 *_abs - print absolute value of int
 *
 *@n: input number as an integer
 *
 * Description: it's my function damnit
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
