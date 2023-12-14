#include "monty.h"

/**
 * isNumber - a
 * @pushData: a
 * @line_number: a
 * Return: a
 */
void isNumber(char *pushData, unsigned int line_number)
{
	unsigned int i = 0;

	while (pushData[i] != '\0')
	{
		if (i == 0 && pushData[i] == '-')
			;
		else if (isCharDigit(pushData[i]) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	data = atoi(pushData);
}
