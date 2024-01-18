#include "monty.h"

/**
 * push - pushes an element onto the stack
 * @stack: pointer to the stack_t structure
 * @line_number: line number in the file
 *
 * Return: nothing(void)
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = line_number;
	new_node->prev = *stack;
	*stack = new_node;
}