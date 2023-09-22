#include "main.h"
/**
 *_strcmp - This c function compares two strings
 *@s1:the first string
 *@s2:the string two
 *Return: This returns 0
 */
int _strcmp(char *s1, char *s2)
{
	int idx = 0, diff;

	while (s1[idx] || s2[idx])
	{
		diff = s1[idx] - s2[idx];
		if ((s1[idx] > s2[idx]) || (s1[idx] < s2[idx]))
			break;
		idx++;
	}
	return (diff);


}
