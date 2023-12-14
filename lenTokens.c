#include "monty.h"
/**
 * lenTokens - Get the number of words separated by a delimiter
 * @lenReaded: n
 * @buffer: n
 * Return: (unsigned int) of words in the buffer
 */
unsigned int lenTokens(ssize_t lenReaded, char **buffer)
{
	char *tempToken = NULL, *copyBuffer = NULL;
	int i;
	char *delim = " \n\t";

	copyBuffer = malloc(sizeof(char) * lenReaded);
	strcpy(copyBuffer, *buffer);
	tempToken = strtok(copyBuffer, delim);
	for (i = 0; tempToken != NULL; i++)
		tempToken = strtok(NULL, delim);
	i++; /* One more to save NULL */
	free(copyBuffer);
	return (i);
}
