#include "monty.h"

/**
 * *getOpcode - a
 * @token: a
 * Return: Function pointer
 */
void (*getOpcode(char *token))(stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t opcodes[] = {
		{"push", push_Stack},
		{"pall", print_Stack},
		{"pint", top_Stack},
		{"pop", pop_Stack},
		{"swap", swap_Stack},
		{"add", add_Stack},
		{"sub", sub_Stack},
		{"div", div_Stack},
		{"mul", mul_Stack},
		{"mod", mod_Stack},
		{"pchar", pchar_Stack},
		{"pstr", pstr_Stack},
		{"rotl", rotl_Stack},
		{NULL, NULL}};

	for (i = 0; opcodes[i].opcode != NULL; i++)
		if (strcmp(token, opcodes[i].opcode) == 0)
			return (opcodes[i].f);

	return (opcodes[i].f);
}
