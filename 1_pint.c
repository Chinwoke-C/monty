#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: Pointer to the stack
 */
void pint(Stack_t *stack)
{
	if (stack->top == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", stack->top->n);
}
