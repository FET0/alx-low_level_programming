#include<stdio.h>
/**
 *main - Entry Point 
 *
 *description: to print numbers using putchar
 *
 *Return: Always (0) Success
 */
int main(void)
{
int x =48;
do {
putchar(x++);
}
while(x <= 57);
putchar('\n');
return (0);

}
