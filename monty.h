#ifndef MONTY_H
#define MONTY_H

typedef struck stack_s
{
  int n;
  struct stacks_s *prev;
  struct stacks_s *next;
} stack_t;

typedef struck instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#endif
