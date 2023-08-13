#include "monty.h"
/**
 * push - pushes an element on to the stack
 * @stack: pointer to the top of the stack
 * @value: value to be pushed onto the stack
 * Return: Nothing
*/
void push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
		new_node->n = value;
		new_node->prev = NULL;
		new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
