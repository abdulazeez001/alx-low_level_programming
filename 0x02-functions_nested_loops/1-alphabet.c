#include "_putchar.h"
/**
* print_alphabet - print lowercase
* Description:Print lowercase alphabet
* Return: 0
*/


void print_alphabet(void)
{
int alpha = 'a';

while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
