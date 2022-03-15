#include "_putchar.h"
/**
* print_alphabet_x10 - print lowercase 10 times
* Description:Print lowercase alphabet
* Return: 0
*/


void print_alphabet_x10(void)
{
int alpha = 'a', j = 0;

while (j < 10)
{
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}

alpha = 'a';

_putchar('\n');
j++;
}
}
