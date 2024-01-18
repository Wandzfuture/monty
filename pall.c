#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top
 * @stack: pointer to the stack_t structure
 * @line_number: line number in the file
 *
 * Return: no return value(void)
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void) line_number;

	if (!current)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
