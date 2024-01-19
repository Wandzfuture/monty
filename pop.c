#include "monty.h"

/**
 * monty_pop - Removes the top element of the stack
 * @stack: Pointer to a pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_pop(stack_t **stack)
{
	int line_number = 0;
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	*stack = (*stack)->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
