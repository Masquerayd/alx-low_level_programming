#include "main.h"

/**
  *jack_bauer - print mintues
  *Description: prints every mintue of the day
  */
void jack_bauer(void)
{
	int H;
	int HH;
	int M;
	int MM;

	for (H = 0; H <= 2; H++)
	{
		_putchar('0' + H);
		for (HH = 0; HH <= 9; HH++)
		{
			_putchar('0' + HH);
			for (M = 0; M <= 6; M++)
			{
				_putchar('0' + M);
				for (MM = 0; MM <= 9; MM++)
				{
					_putchar('0' + MM);
				}
			}
		}
	}

}
