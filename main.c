#include "monty.h"


/**
 * main - Entry point for the Monty program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: EXIT_SUCCESS on success, otherwise EXIT_FAILUR
 */
int main(int argc, char *argv[])
{
	stack_t *top = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		return (EXIT_FAILURE);
	}
	
	/* TODO: read the file and call push and pall functions */
	pall(&top, line_number);

	return (EXIT_SUCCESS);
}
