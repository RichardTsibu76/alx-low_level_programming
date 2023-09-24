#include "main.h"
/**
 *rot13 - This function encodes a string using rot13
 *@str: This is a string to encode
 *Return: Returns
 */
char *rot13(char *str)
{
	int i;
	int j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijkklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(str + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(str + j))
			{
				*(str + i) = b[j];
				break;
			}
		}

	}
	return (str);
}
