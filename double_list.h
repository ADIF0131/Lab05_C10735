// Estudiante: Anthonny Artavia Alpizar C10735
// Curso: Programacion Bajo Plataformas Abiertas

#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct DoublyLinkedList {
    Node* head;
    Node* tail;
} DoublyLinkedList;

DoublyLinkedList* create_list();
void insert_at_beginning(DoublyLinkedList* list, int data);
void insert_at_end(DoublyLinkedList* list, int data);
void insert_at_position(DoublyLinkedList* list, int index, int data);
void delete_node_by_value(DoublyLinkedList* list, int data);
Node* find_node_by_value(DoublyLinkedList* list, int data);
void print_forward(DoublyLinkedList* list);
void print_backward(DoublyLinkedList* list);
void free_list(DoublyLinkedList* list);

#endif // DOUBLE_LIST_H
