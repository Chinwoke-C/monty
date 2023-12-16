#include "monty.h"
/**
 *_swap - swaps the top most 2 elements of the stack
 * @stack: input
 * Return: void
 */
void _swap(stack_t **stack, unsigned int line_number)
{

	if (stack->top == NULL || stack->top->next == NULL)
	{
		fprintf(stderr, "Error: can't print, stack too short\n");
		exit(EXIT_FAILURE);
	}
	stack_t *top;
	top = *stack;
	Node *first = stack->top;
	Node *second = first->next;

	/* Adjust links for the first node*/
	first->next = second->next;
	if (second->next != NULL)
	{
		second->next->prev = first;
	}

	/*Adjust links for the second node*/
	second->prev = NULL;
	second->next = first;
	first->prev = second;

	/* Update the top of the stack*/
	stack->top = second;
}
