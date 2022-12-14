#include "main.h"
/**
 * print_times_table - Prints the times table of the input
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar(48);
for (j = i; j <= i; j++)
{
op = a * b;
_putchar(44);
_putchar(32);
if (op <= 9)
{
_putchar(32);
_putchar(32);
_putchar(op + 48);
}
else if (op <= 99)
{
_putchar(32);
_putchar((op / 10) + 48);
_putchar((op % 10) + 48);
}
else
{
_putchar(((op / 100) % 10) + 48);
_putchar(((op / 10) % 10) + 48);
_putchar((op % 10) + 48);
}

}
_putchar('\n');
}

}

}
