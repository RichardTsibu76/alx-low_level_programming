#include "main.h"

/**
 *_memset - a function that fills memory
 *@s: pointer
 *@b: pointer
 *Return: the ret value
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
                /* Just changing the value stored in the first n memory location*/

        }
        return (s);
}
