#include "monty.h"

/**
 * monty_pall - Prints all the values on the stack, starting from the top
 * @stack: Pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_pall(stack_t *stack)
{
	stack_t *current;

	if (stack == NULL)
	{
		fprintf(stderr, "Error: Empty stack\n");
		exit(EXIT_FAILURE);
	}

	current = stack;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
