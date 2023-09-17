#include "main.h"
/**
 *jack_bauer - this prints every minute of the day(00:00 -23:59)
 *Return: this returns nothing
 */
void jack_bauer(void)
{
	int t_hr;
	int t_mn;

	for (t_hr = 0; t_hr < 60; t_mn++)
	{
		for (t_mn = 0; t_mn < 60; t_mn++)
		{
		_putchar((t_hr / 10) + '0');
		_putchar((t_hr % 10) + '0');
		_putchar(':');
		_putchar((t_mn / 10) + '0');
		_putchar((t_mn % 10) + '0');
		_putchar('\n');

		}

	}
}
