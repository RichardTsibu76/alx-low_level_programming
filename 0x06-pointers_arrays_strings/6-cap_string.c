#include "main.h"
/**
 * _special - return
 * @a: character
 * Return: bol
 */
int _special(char a)
{
	int i;

	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!',
		'?', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - this function capitalizes string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_special(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_special(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
	}
	return (s);
}
