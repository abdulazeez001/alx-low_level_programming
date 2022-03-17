#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10X
 * Return:0
 */

void more_numbers(void)
{
char n = 0, k;
int m = 0;

while (m < 10)
{
while (n <= 14)
{
k = n;
if (n > 9)
{
_putchar('1');
k = n % 10;
}
_putchar('0' + k);
n++;
}
_putchar('\n');
m++;
}
}
