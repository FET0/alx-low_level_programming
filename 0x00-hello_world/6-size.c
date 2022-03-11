#include<stdio.h>
/**
* main - Entry point
*
* return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
fprintf(stderr "size of char; %d bytes(s)\n", sizeof (a));
fprintf(stderr "size of  int; %d bytes(s)\n", sizeof (b));
fprintf(stderr "size of  long int; %d bytes(s)\n", sizeof (c));
fprintf(stderr "size of long long int; %d byte(s)\n", sizeof (d));
fprintf(stderr "size of float; %d byte(s)\n", sizeof (e));
return (0);
}
