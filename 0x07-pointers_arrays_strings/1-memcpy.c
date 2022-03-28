#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (n > 0)
{
dest[i] = src[i];
i++;
n--;
}

return (dest);
}
