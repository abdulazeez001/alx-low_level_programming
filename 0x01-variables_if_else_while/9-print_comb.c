#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
