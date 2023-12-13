#include "monty.h"
/**
 * f_pall - prints the stack
 * @stack: stack head
 * Return: no return
 *@line_number: line number being executed
*/
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	h = *head;
	if (h == NULL)
		return;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
