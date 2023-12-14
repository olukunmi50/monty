#include "monty.h"
/**
 * monty_Init - a
 * @stack: a
 * @tokens: a
 * @line_number: a
 * Return: a
 */
void monty_Init(stack_t **stack, char ***tokens, unsigned int line_number)
{
	void (*op_func)(stack_t **stack, unsigned int line_number);

	unsigned int i;

	if ((strcmp((*tokens)[0], "nop") == 0) || (*((*tokens)[0]) == '#'))
		return;

	if (strcmp((*tokens)[0], "push") == 0)
	{
		for (i = 0; (*tokens)[i] != NULL; i++)
		{
			if (i == 1)
			{
				isNumber((*tokens)[i], line_number);
				/* data = atoi((*tokens)[i]); */
				
			}
		}
		if (i == 1 && (*tokens)[i] == NULL)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		/* printf("value of i: %u\n", i); */
	}
	op_func = getOpcode((*tokens)[0]);

	if (op_func != NULL)
		op_func(stack, line_number);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, (*tokens)[0]);
		exit(EXIT_FAILURE);
	}

}
