#include "main.h"

/**
 *_abs-prints the absolute value of an integer.
 *@a:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
 */
int _abs(int p)
{
	int k = p;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}

