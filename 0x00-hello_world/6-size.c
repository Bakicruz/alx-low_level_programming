#include <stdio.h>

/**
 * main - Entry point
 * Return - Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeeof(d));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeeof(a));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeeof(b));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeeof(c));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeeof(f));
return (0);
}
