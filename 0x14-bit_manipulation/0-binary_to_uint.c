#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int index = 0;

	if (b[index] == '\0')
		return (0);
	while (b[index] == '0' || b[index] == '1')
	{
		total <<= 1;
		total += b[index] - '0';
		index++;
	}

	return (num);
}
