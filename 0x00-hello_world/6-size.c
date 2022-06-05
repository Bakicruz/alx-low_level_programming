#include <stdio.h>

/**
 * main - prints the size of various types
 * Return - 0 if exited properly
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeeof(char));
printf("Size of an int: %d byte(s)\n", sizeeof(int));
printf("Size of a long int: %d byte(s)\n", sizeeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeeof(float));
return (0);
}
