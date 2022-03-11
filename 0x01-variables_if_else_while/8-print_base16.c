#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c = '0';
	char d = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	while (d <= 'f')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}
