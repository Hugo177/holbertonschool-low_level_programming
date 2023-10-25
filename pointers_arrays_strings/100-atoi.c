#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
/**
 * _atoi - convert a string to an integer.
 * @s: string
 * Return: integer to be convert
 */
int _atoi(char *s)
