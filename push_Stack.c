#include "monty.h"

int data;

/**
 * push_Stack - Free the stack
 * @stack: Head of the list
 * @line_number: Head of the list
 *
 * Return: nothing
 */
void push_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *new = malloc(sizeof(stack_t));
	(void)line_number;

	if (new == NULL)
		return;

	new->n = data;
	new->prev = NULL;
	new->next = NULL;

	if (*stack != NULL)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}

	*stack = new;
}
