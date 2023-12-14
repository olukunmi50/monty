#include "monty.h"
/**
 * pstr_Stack - Prints the string starting at the top of the stack
 * @stack: Top of the list
 * @line_number: Top of the list
 *
 * Return: nothing
 */
void pstr_Stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void) line_number;
	while (temp != NULL)
	{
		if (temp->n > 0 && temp->n < 128)
			printf("%c", temp->n);
		else
			break;
		temp = temp->next;
	}
	printf("\n");
}
