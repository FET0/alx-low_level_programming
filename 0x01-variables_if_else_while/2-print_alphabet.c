#include <stdio.h>
/**
 * main - Entry point
 *
 * description: print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int x = 97;
do{
putchar(x++);
}while (x <= 122);
putchar('\n');
return (0);
}
