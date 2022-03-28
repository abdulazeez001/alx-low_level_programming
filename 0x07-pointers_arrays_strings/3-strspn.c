#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int ai;

while (*s)
{
for (ai = 0; accept[ai]; ai++)
{
if (accept[ai] == *s)
{
count++;
break;
}
else if (accept[ai + 1] == '\0')
{
return (count);
}
}

s++;
}

return (count);

}
