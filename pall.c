#include "monty.h"

/**
 * pall - Prints all values on the stack, starting from the top.
 */
void pall(void)
{
    stack_t *current = stack;

    while (current)
    {
        printf("%d\n", current->data);
        current = current->next;
    }
}

