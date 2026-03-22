#include <stdlib.h>
#include "stack.h"

elem* push(elem* top, int data){
    elem* ptr = malloc(sizeof(elem));
    ptr->data = data;
    ptr->next = top;
}

elem* pop(elem* top){
    if (top == NULL) return top;

    elem* ptr_next = top->next;
    free(top);

    return ptr_next;
}

int is_empty(elem* top){
    return top == NULL;
}
