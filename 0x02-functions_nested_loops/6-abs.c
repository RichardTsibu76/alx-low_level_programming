#include <stdio.h>
#include "main.h"

/**
 *_abs - This computes the absolut num of an integer
 *@h: denoting character.
 *Return: This return 0 on success
 */
int _abs(int h)
{
	if (h >= 0)
		h = h;
	else
	h = h * -1;
		return (h);
}
