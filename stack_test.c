#include <stdio.h>
#include "stack.h"

int main(void){
    elem* top = NULL;

    //добавляем элементы (числа)
    top = push(top, 564);
    top = push(top, 10);
    top = push(top, 225);

    //напечатаем их (без удаления)
    const elem* current = top;
    while (current != NULL){
        printf("число %d\n", current->data);
        current = current->next;
    }

    //последовательно удалим
    while(top) top = pop(top);

    //проверим, пуст ли стек
    if (is_empty) printf("стек не содержит элементов\n");
}