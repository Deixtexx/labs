#ifndef STACK_H
#define STACK_H
#define STACK_MAX_SIZE 20

#include <stddef.h>

typedef int T;
typedef struct stack_t {
    T data[STACK_MAX_SIZE];
    size_t size;
} stack;

//операция добавления следующего элемента
void push(stack* stack, const T value);

//удаление элемента
T pop(stack* stack);

//проверка стека на наличие в нем элементов
int is_empty(stack* stack);

#endif