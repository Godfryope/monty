#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX_SIZE 1024

/* Structure for the stack */
typedef struct stack_s {
    int data;
    struct stack_s *next;
} stack_t;

/* Global variable for the stack */
extern stack_t *stack;

/* Function prototypes */
void push(int value);
void pall(void);

#endif /* MONTY_H */

