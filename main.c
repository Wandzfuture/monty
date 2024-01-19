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
	monty_pint(&stack, 0);


	monty_pop(&stack);
	monty_pall(stack);

	monty_swap(&stack);
	monty_pall(stack);

	monty_add(&stack);
	monty_pall(stack);

	monty_nop(&stack, 0);


	return (0);
}
