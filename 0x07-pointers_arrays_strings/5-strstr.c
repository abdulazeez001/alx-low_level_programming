#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
int j;
while (*haystack)
{
for (j = 0; needle[j]; j++)
{
if (haystack[j] != needle[j])
{
break;
}
return (haystack);
}
j = j + 1;
haystack += j;
}
return ('\0');
}
