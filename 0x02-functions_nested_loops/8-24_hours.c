#include "main.h"
/**
 * jack_bauer-prints all minutes in a day from 00:00
 *
 * Return:0 if succeesful.
 */


void jack_bauer(void)
{
	int o, p, k, m;

	for (o = 0; o <= 2; o++)
	{
		for (p = 0; p <= 9; p++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (o == 2 && p > 3)
					{break;
					}
					_putchar(o + '0');
					_putchar(p + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}


