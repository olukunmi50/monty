#include "monty.h"

int data;
/**
 * print_Stack - Free the stack
 * @stack: Head of the list
 * @line_number: Head of the list
 *
 * Return: nothing
 */
void print_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
		return;
	(void)line_number;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
