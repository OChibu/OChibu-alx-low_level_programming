#include <studio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0
*/
int main(void)
{
int n, m, l;
for (n = 48; n < 58; n++)
{
for (m = 49; m < 58; m++)
{
for (l = 50; l < 58; l++)
{
if (l > m && m > n)
{
putchar(n);
}
putchat(m);
}
putchar(l);
}
f(n != 55 || m != 56)
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}