#include "main.h"
/**
 *get_endianness - A function that checks the endianness
 *
 *Return: 0 if big endian, 1 if litlle endian
 */
int get_endianness(void)
{
	unsigned int endian = 1;
	char *c = (char *) &endian;

	return ((int) *c);
}
