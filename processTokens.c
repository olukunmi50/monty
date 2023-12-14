#include "monty.h"
/**
 * processTokens - Get all of the strings separated by a delimiter in
 * an array of strings
 * @tokens: n
 * @buffer: n
 * @countToken: n
 *
 * Return: nothing
 */
void processTokens(char ***tokens, char **buffer, unsigned int countToken)
{
	char *token = NULL;
	unsigned int i;
	char *delim = " \n\t";
	/* char *opcodes[] = {"push", "pall", NULL}; */

	/* printf("countToken en processTokens %u\n", countToken); */
	token = strtok(*buffer, delim);

	if (strcmp(token, "push") == 0)
		countToken = 3;
	else
		countToken = 2;
	*tokens = malloc(sizeof(char *) * countToken);
	for (i = 0; token != NULL && i <= countToken - 2; i++)
	{
		/* printf("VALOR DE I, %d\n", i); */
		(*tokens)[i] = token;
		token = strtok(NULL, delim);
	}
	/* (*tokens)[i] = token; */
	(*tokens)[i] = NULL;
}
