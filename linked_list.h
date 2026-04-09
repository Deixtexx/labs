#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stddef.h>

// Структура узла списка
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Структура списка
typedef struct LinkedList {
    Node* head;
    size_t size;
} LinkedList;

// Функции по заданию
LinkedList* create_list();
void free_list(LinkedList* list);

int add_at_head(LinkedList* list, int data);       // В начало
int add_at_tail(LinkedList* list, int data);       // В конец
int add_at_index(LinkedList* list, size_t index, int data); // В середину

int remove_at_index(LinkedList* list, size_t index); // Удалить
Node* get_at_index(LinkedList* list, size_t index);  // Найти по номеру
size_t get_size(LinkedList* list);                   // Подсчет элементов

#endif