#include "monty.h"

/**
 * monty_pint - Prints the value at the top of the stack
 * @stack: Pointer to a pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_pint(stack_t **stack)
{
	int line_number = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
