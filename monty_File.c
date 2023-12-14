#include "monty.h"
/**
 * monty_File - a
 * @argv: a
 * Return: a
 */
void monty_File(char **argv)
{
	const char *filename = argv[1];
	FILE *fp;
	char *buffer = NULL, **tokens = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 1;
	stack_t *stack = NULL;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&buffer, &len, fp)) != -1)
	{

		monty_Tokens(&buffer, &tokens, read);
		/* printf("Buffer after montyTokens: %s\n", buffer); */
		if (tokens != NULL)
			monty_Init(&stack, &tokens, line_number);
		/* printf("tokens %u: **%s**\n", i, tokens[i]); */
		free_Tokens(&tokens);
		line_number++;
	}

	fclose(fp);

	if (buffer != NULL)
		free(buffer);
	freeStack(stack);
}
