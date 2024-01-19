#include "monty.h"

/**
 * monty_pall - Prints all the values on the stack, starting from the top
 * @stack: Pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_pall(stack_t *stack)
{
	while (stack != NULL)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
