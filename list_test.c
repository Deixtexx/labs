#include "linked_list.h"
#include <stdio.h>
#include <assert.h>

int main() {
    LinkedList* list = create_list();

    add_at_head(list, 10);
    add_at_tail(list, 30);
    add_at_index(list, 1, 20); // Список: [10, 20, 30]

    printf("Размер списка: %zu\n", get_size(list));
    assert(get_size(list) == 3);

    Node* n = get_at_index(list, 1);
    printf("Элемент под индексом 1: %d\n", n->data);
    assert(n->data == 20);

    remove_at_index(list, 1);
    printf("После удаления размер: %zu\n", get_size(list));
    assert(get_size(list) == 2);

    printf("Все тесты задачи 6 пройдены!\n");
    free_list(list);
    return 0;
}