#include "main.h"
#include <string.h>

/**
 *_strcat - This fuction concatenates two strings
 *@dest: one of two sessions for concatenation
 *@src: constant for appending
 *Return: return pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
        int cal_len;
        int idx;

        for (cal_len = 0; dest[cal_len]; cal_len++)
                ;
        idx = 0;
        while (src[idx])
        {
                dest[cal_len] = src[idx];
                cal_len++;
                idx++;
        }
        dest[cal_len] = '\0';

        return (dest);
}
