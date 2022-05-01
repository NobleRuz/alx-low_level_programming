#include "main.h"

/**
 * binary_to_uint: Converts a binary number to unsigned integer
 * @b: String containing the binary number
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	int i;

	
	if (b == NULL)
		return (0);

	
	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	
	for (i = 0; b[i] != '\0'; i++)
	{
		num *= 2;
		if (b[i] == '1')
			num += 1;
	}
	return (num);



}
