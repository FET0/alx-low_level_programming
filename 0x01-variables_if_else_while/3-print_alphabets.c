#include <stdio.h>
/**
 *main - Entry Point.
 *
 * description: print alphabets in lowercase then uppercase then new line.
 *
 * Return: Always 0 Success.
 */

int main(void)
{
int x = 97, y = 65;
do {
putchar(x++);
}while (x <= 122);
do {
putchar(y++);
} while (y <= 90);
putchar('\n');
return (0);
}
