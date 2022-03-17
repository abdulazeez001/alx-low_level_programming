#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

int num = 1, i = 0, j = 0;

if (n < 0)
{
_putchar('-');
n = -n;
}

while (n / num != 0)
{
num *= 10;
i++;
}
num = num / 10;

while (j < i)
{
_putchar('0' + n / num);
n = n - (n / num) *num;
num = num / 10;
j++;
}

if (i == 0)
_putchar('0' + n);

}

