#include <stdio.h>

/**
 *main -> Entry point and prints the alphabets in lowecase
 *then in upppercase
 *Return: Always 0 (Success)
 */
int main(void)
{
char h;
char J;
for (h = 'a'; h <= 'z'; h++)
{
	putchar(h);
}
for (J = 'A'; J <= 'Z'; J++)
{
	putchar(J);
}
	putchar('\n');
return (0);
}
