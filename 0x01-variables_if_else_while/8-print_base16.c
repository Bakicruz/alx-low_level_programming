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
for (h = '0'; h <= '9'; h++)
{
	putchar(h);
}
for (J = 'a'; J <= 'f'; J++)
{
	putchar(J);
}
	putchar('\n');
return (0);
}
