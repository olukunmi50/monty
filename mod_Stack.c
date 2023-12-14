#include "monty.h"
/**
 * mod_Stack - Free the stack
 * @stack: Head of the list
 * @line_number: Head of the list
 *
 * Return: nothing
 */
void mod_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int top;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->next;
	top = (*stack)->n;
	if (top == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	free(*stack);
	*stack = temp;
	(*stack)->n = (*stack)->n % top;

	if (*stack != NULL)
		(*stack)->prev = NULL;
}
