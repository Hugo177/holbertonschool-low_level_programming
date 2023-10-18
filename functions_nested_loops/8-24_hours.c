#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: ...
 */
void jack_bauer(void)
{

int brazil;

	for (brazil = 0; brazil < 24; brazil++)
	{

		int min;

		for (min = 0; min < 60; min++)

{
			_putchar(brazil / 10 + '0');
			_putchar(brazil % 10 + '0');
			_putchar(':');

			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');

			_putchar('\n');
	}

}

