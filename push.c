#include "monty.h"

/**
 * monty_push - Pushes an integer onto the stack
 * @stack: Pointer to a pointer to the top of the stack
 * @n: Integer to be pushed onto the stack
 *
 * Return: Pointer to the newly created node
 */
stack_t *monty_push(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		exit(EXIT_FAILURE);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
	return (new_node);
}
