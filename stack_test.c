#include "stack.h"
#include <stdio.h>

int main(void) {
  stack s;
  s.size = 0;

  // добавляем элементы
  push(&s, 8);
  push(&s, 21);

  // удаляем элементы и выводим их
  printf("получаем число %d\n", pop(&s));
  printf("получаем число %d\n", pop(&s));

  // проверяем, пуст ли стек
  if (is_empty(&s))
    printf("стек пуст\n");
}