#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @stack: Pointer to the stack
 * @line_number: line number where the instruction appears.
 */
void pint(Stack_t *stack, unsigned int line_number)

 * @line_number: number of line opcode occurs on
 */
void pint(stack_t **stack,unsigned in line_number)
{
	stack_t *top
	if (stack->top == NULL)
	{
		(void)line_number;
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);

	}

	printf("%d\n", stack->top->n);
}
