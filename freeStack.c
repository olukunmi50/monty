#include "monty.h"
/**
 * freeStack - Free the stack
 * @stack: Top of the list
 *
 * Return: nothing
 */
void freeStack(stack_t *stack)
{
	stack_t *temp;

	if (stack == NULL)
		return;

	while (stack != NULL)
	{
		temp = stack;
		stack = temp->next;
		free(temp);
	}
}
