#include "monty.h"
/**
 * monty_Tokens - a
 * @buffer: a
 * @tokens: a
 * @read: a
 * Return:
 */
void monty_Tokens(char **buffer, char ***tokens, ssize_t read)
{
	unsigned int countToken, i;

	if (read > 0)
	{
		i = 0;
		while ((*buffer)[i] == ' ' || (*buffer)[i] == '\t')
		{
			if ((*buffer)[i + 1] == '\n')
				return;
			i++;
		}
	}

	if (**buffer != '\n')
	{
		/* printf("INTRO TO BUFFER\n"); */
		replaceNewLine(buffer);
		countToken = lenTokens(read, buffer);
		/* printf("countToken %u\n", countToken); */
		if (countToken > 3)
			countToken = 3;
		processTokens(tokens, buffer, countToken);
	}
	}
