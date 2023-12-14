#include "monty.h"
/**
 * free_Tokens - a
 * @tokens: a
 * Return: a
 */
void free_Tokens(char ***tokens)
{
	if (*tokens != NULL)
	{
		free(*tokens);
		*tokens = NULL;
	}
}
