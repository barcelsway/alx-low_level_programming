#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: String containing the binary number.
 *
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[a] - '0');
	}

	return (dec_val);
}
