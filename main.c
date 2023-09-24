#include "monty.h"

stack_t *stack = NULL;

int main(int argc, char *argv[])
{
    /* Check command line arguments */
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /* Open the Monty bytecode file */
    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* Process Monty bytecode instructions line by line */
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
    int line_number = 0;

    while ((nread = getline(&line, &len, file)) != -1)
    {
        line_number++;
        /* Parse and execute the Monty bytecode instruction */
        // You need to implement the code for instruction parsing and execution here
    }

    /* Clean up and close the file */
    free(line);
    fclose(file);

    /* Free the stack if it's not empty */
    while (stack)
    {
        stack_t *temp = stack;
        stack = stack->next;
        free(temp);
    }

    return (EXIT_SUCCESS);
}

