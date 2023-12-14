#include "monty.h"

int data;
/**
 * swap_Stack - Free the stack
 * @stack: Head of the list
 * @line_number: Head of the list
 *
 * Return: nothing
 */
void swap_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int top;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	top = temp->n;

	(*stack)->n = temp->next->n;
	temp->next->n = top;
}
