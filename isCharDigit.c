#include "monty.h"
/**
 * isCharDigit - a
 * @c: a
 * Return: a
 */
int isCharDigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '-'))
		return (1);
	return (0);
}
