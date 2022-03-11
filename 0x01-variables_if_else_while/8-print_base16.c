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

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	char num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
