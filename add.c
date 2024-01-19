#include "monty.h"

/**
 * monty_add - Adds the top two elements of the stack
 * @stack: Pointer to a pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_add(stack_t **stack)
{
	int line_number = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	monty_pop(stack);
}
