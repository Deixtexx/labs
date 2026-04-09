#include "stack.h"

void push(stack *stack, const T value) {
  if (stack->size == STACK_MAX_SIZE)
    return;
  stack->data[stack->size++] = value;
}

T pop(stack *stack) {
  if (is_empty(stack))
    return -1;
  return stack->data[stack->size--];
}

int is_empty(stack *stack) { return stack->size == 0; }
