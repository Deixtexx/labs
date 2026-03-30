#include "linked_list.h"
#include <stdlib.h>

LinkedList* create_list() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (list) {
        list->head = NULL;
        list->size = 0;
    }
    return list;
}

int add_at_head(LinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) return -1;
    new_node->data = data;
    new_node->next = list->head;
    list->head = new_node;
    list->size++;
    return 0;
}

int add_at_tail(LinkedList* list, int data) {
    if (list->size == 0) return add_at_head(list, data);
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) return -1;
    new_node->data = data;
    new_node->next = NULL;
    Node* curr = list->head;
    while (curr->next) curr = curr->next;
    curr->next = new_node;
    list->size++;
    return 0;
}

int add_at_index(LinkedList* list, size_t index, int data) {
    if (index == 0) return add_at_head(list, data);
    if (index >= list->size) return add_at_tail(list, data);
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (!new_node) return -1;
    new_node->data = data;
    Node* curr = list->head;
    for (size_t i = 0; i < index - 1; i++) curr = curr->next;
    new_node->next = curr->next;
    curr->next = new_node;
    list->size++;
    return 0;
}

int remove_at_index(LinkedList* list, size_t index) {
    if (index >= list->size || !list->head) return -1;
    Node* temp;
    if (index == 0) {
        temp = list->head;
        list->head = list->head->next;
    } else {
        Node* curr = list->head;
        for (size_t i = 0; i < index - 1; i++) curr = curr->next;
        temp = curr->next;
        curr->next = temp->next;
    }
    free(temp);
    list->size--;
    return 0;
}

Node* get_at_index(LinkedList* list, size_t index) {
    if (index >= list->size) return NULL;
    Node* curr = list->head;
    for (size_t i = 0; i < index; i++) curr = curr->next;
    return curr;
}

size_t get_size(LinkedList* list) { return list ? list->size : 0; }

void free_list(LinkedList* list) {
    Node* curr = list->head;
    while (curr) {
        Node* next = curr->next;
        free(curr);
        curr = next;
    }
    free(list);
}