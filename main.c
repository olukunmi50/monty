#include "monty.h"

/**
 * main - a
 * @argc: a
 * @argv: a
 * Return: a
 */
int main(int argc, char **argv)
{
	(void)data;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	monty_File(argv);
	return (0);
}
