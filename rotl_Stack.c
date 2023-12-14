#include "monty.h"
/**
 * rotl_Stack - Prints the string starting at the top of the stack
 * @stack: Top of the list
 * @line_number: Top of the list
 *
 * Return: nothing
 */
void rotl_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack, *temp = *stack;

	(void) line_number;
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	if (temp->next != NULL)
		temp->next->prev = NULL;

	*stack = temp->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = top;
	top->prev = temp;
	top->next = NULL;
}
