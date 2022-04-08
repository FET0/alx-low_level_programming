#include <stdio.h>
/**
 *main - Entry Point
 *
 *description: print alphabet in lowercase without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 97;
do {
if (x == 113 || x == 101)
{
goto next;
next:
++x;
}
else
putchar(x++);
} while (x <= 122);
putchar('\n');
return (0);
}
