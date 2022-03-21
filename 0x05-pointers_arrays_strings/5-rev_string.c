#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{
int len_ = 0;
int i, temp;

while (s[len_])
{
len_++;
}
for (i = 0; i <= len_ / 2; i++)
{
temp = s[len_ - i - 1];
s[len_ - i - 1] = s[i];
s[i] = temp;
}
}
