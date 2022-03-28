#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, count1 = 0, count2 = 0;

	for (i = 0; i < size; i++)
	{
		count1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		count2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", count1, count2);
}
