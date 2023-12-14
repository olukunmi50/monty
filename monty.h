#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

extern int data;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

unsigned int lenTokens(ssize_t lenReaded, char **buffer);
void replaceNewLine(char **buffer);
void processTokens(char ***tokens, char **buffer, unsigned int countToken);
void freeTokens(char ***tokens);

void monty_File(char **argv);
void monty_Tokens(char **buffer, char ***tokens, ssize_t read);
void monty_Init(stack_t **stack, char ***tokens, unsigned int line_number);

void freeStack(stack_t *stack);
/* Op Functions library */
void push_Stack(stack_t **stack, unsigned int line_number);
void print_Stack(stack_t **stack, unsigned int line_number);
void top_Stack(stack_t **stack, unsigned int line_number);
void pop_Stack(stack_t **stack, unsigned int line_number);
void swap_Stack(stack_t **stack, unsigned int line_number);
void add_Stack(stack_t **stack, unsigned int line_number);
void sub_Stack(stack_t **stack, unsigned int line_number);
void div_Stack(stack_t **stack, unsigned int line_number);
void mul_Stack(stack_t **stack, unsigned int line_number);
void mod_Stack(stack_t **stack, unsigned int line_number);
void pchar_Stack(stack_t **stack, unsigned int line_number);
void pstr_Stack(stack_t **stack, unsigned int line_number);
void rotl_Stack(stack_t **stack, unsigned int line_number);


void (*getOpcode(char *token))(stack_t **stack, unsigned int line_number);

int isCharDigit(int c);
void isNumber(char *pushData, unsigned int line_number);

#endif
