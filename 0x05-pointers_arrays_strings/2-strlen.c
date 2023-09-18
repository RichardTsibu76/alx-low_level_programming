#include "main.h"

/**
 * _strlen - This function returns len
 * @s: string
 * Return: return len
 */
int _strlen(char *s)
{
	int cal, len;

	len = 0;
	for (cal = 0; s[cal] != '\0'; cal++)
	len++;

	return (len);
}
