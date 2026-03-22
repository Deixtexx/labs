#ifndef STACK_H
#define STACK_H

typedef struct stack_elem {
    int data;
    struct stack_elem* next;
} elem;
//операция добавления следующего элемента
elem* push(elem* top, int data);

//удаление элемента
elem* pop(elem* top);

//проверка стека на наличие в нем элементов
int is_empty(elem* top);

#endif