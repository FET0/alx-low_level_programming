#include <stdio.h>
/**
 * main - Entry Point
 *
 * description: print alphabets in reverse
 *
 * Return: Always (0) Success
 */
int main(void)
{
int x = 122;
do {
putchar(x--);
} while(x >= 97);
putchar('\n');
return (0);
}
