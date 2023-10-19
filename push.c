#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: pointer to list of stack_t
 * @line_number: line number in the file
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *line = NULL;

	line = malloc(sizeof(stack_t));

	line->n = line_number;
	line->next = NULL;
	line->prev = NULL;

	if (*stack == NULL || stack == NULL)
		*stack = line;
	else
	{
		line->next = *stack;
		(*stack)->prev = line;
		*stack = line;
	}
}
