#include "monty.h"

/**
 * monty_swap - Swaps the top two elements of the stack
 * @stack: Pointer to a pointer to the top of the stack
 *
 * Return: No return value (void)
 */
void monty_swap(stack_t **stack)
{
	int line_number = 0;
	stack_t *tmp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *stack;
	tmp->prev = NULL;
	tmp->next = *stack;
	(*stack)->prev = tmp;
	*stack = tmp;
}
