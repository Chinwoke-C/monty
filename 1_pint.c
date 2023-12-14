#include "monty.h"


/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: Pointer to the stack
 * @line_number: number of line opcode occurs on
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *runner;
	
	runner = *stack;
	if (runner == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", runner->n);
}
