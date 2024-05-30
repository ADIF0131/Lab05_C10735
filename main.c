// Estudiante: Anthonny Artavia Alpizar C10735
// Curso: Programacion Bajo Plataformas Abiertas

#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"

int main() {
    DoublyLinkedList* list = create_list();

    // Se insertan nodos al inicio
    insert_at_beginning(list, 4);
    insert_at_beginning(list, 1);

    // Imprimir lista hacia adelante
    printf("Esta e la lista hacia adelante después de insertar al inicio: ");
    print_forward(list);

    // Se insertan nodos al final
    insert_at_end(list, 7);
    insert_at_end(list, 10);

    // Se imprime lista hacia adelante
    printf("Esta es la lista hacia adelante después de insertar al final: ");
    print_forward(list);

    // Se inserta nodo en una posición específica (índice 3)
    insert_at_position(list, 2, 3);

    // Se imprime lista hacia adelante
    printf("Nueva lista hacia adelante después de insertar en índice 3: ");
    print_forward(list);

    // Se elimina un nodo con el valor 3
    delete_node_by_value(list, 3);

    // Se imprime lista hacia adelante
    printf("Nueva lista hacia adelante después de eliminar el nodo con valor 3: ");
    print_forward(list);

    // Se busca un elemento con el valor 7
    Node* found = find_node_by_value(list, 7);
    if (found) {
        printf("Elemento con valor 7 encontrado.\n");
    } else {
        printf("Elemento con valor 7 no encontrado.\n");
    }

    // Recorrer la lista hacia atrás e imprimirla
    printf("Lista hacia atrás: ");
    print_backward(list);

    // Liberar memoria
    free_list(list);
    return 0;
}
