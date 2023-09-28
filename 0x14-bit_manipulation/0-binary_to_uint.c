#include "main.h"

/**
 * binary_to_uint - converts any binary No. to unsighed int
 * b: string with binary No. 
 *
 * Return: the converted No.
 */
unsigned int binary_to_uint(const char *b)
{
        int a;
        unsigned int dec_val = 0;

        if (!b)
                return (0);

        for (a = 0; b[i]; a++)
        {
                if (b[a] < '0' || b[a] > '1')
                        return (0);
                dec_val = 2 * dec_val + (b[a] - '0');

        }

        return (dec_val);
}
