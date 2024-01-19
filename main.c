#include "monty.h"

/**
 * main - Entry point of the Monty interpreter program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	stack_t *stack = NULL;

	monty_push(&stack, 1);
	monty_push(&stack, 2);
	monty_push(&stack, 3);
	monty_pall(stack);
	monty_pint(&stack);

	/**
	 * pop(&stack);
	 * pall(stack);
	 *
	 * swap(&stack);
	 * pall(stack);
	 *
	 * add(&stack);
	 * pall(stack);
	 *
	 * nop();
	 */

	return (0);
}
