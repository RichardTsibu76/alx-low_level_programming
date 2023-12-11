#include "main.h"
#include <string.h>

/**
 *_memcpy - copies from one memory to anothr
 *@dest: destination
 *@src: source
 *@n: constant variable
 *Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int index = 0;

        while (index < n)

        {
                dest[index] = src[index];
                index++;

        }
        return (dest);
}
