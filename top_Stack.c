#include "monty.h"

int data;
/**
 * top_Stack - Free the stack
 * @stack: Head of the list
 * @line_number: Head of the list
 *
 * Return: nothing
 */
void top_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}
