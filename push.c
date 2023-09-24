#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @value: The value to push onto the stack.
 */
void push(int value)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->data = value;
    new_node->next = stack;
    stack = new_node;
}

