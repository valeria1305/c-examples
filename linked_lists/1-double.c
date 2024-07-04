#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Definición de la estructura del nodo
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Función para crear un nuevo nodo
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

// Función para insertar un nodo al principio
void insertAtHead(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
}

// Función para insertar un nodo al final
void insertAtTail(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Función para eliminar un nodo con un valor específico
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Nodo con valor %d no encontrado.\n", key);
        return;
    }
    if (*head == temp) {
        *head = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    free(temp);
}

// Función para buscar un nodo con un valor específico
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Función para recorrer la lista hacia adelante
void printForward(Node* head) {
    Node* temp = head;
    printf("Recorrido hacia adelante: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Función para recorrer la lista hacia atrás
void printBackward(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    printf("Recorrido hacia atrás: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

// Función principal para probar las operaciones de la lista
int main() {
    Node* head = NULL;

    // Insertar elementos al principio
    insertAtHead(&head, 10);
    printForward(head);
    insertAtHead(&head, 20);
    printForward(head);
    insertAtHead(&head, 30);
    printForward(head);

    // Insertar elementos al final
    insertAtTail(&head, 40);
    printForward(head);
    insertAtTail(&head, 50);
    printForward(head);

    // Imprimir la lista en ambas direcciones
    printForward(head);
    printBackward(head);

    // Buscar elementos en la lista
    int key = 20;
    if (search(head, key)) {
        printf("Elemento %d encontrado en la lista.\n", key);
    } else {
        printf("Elemento %d no encontrado en la lista.\n", key);
    }

    // Eliminar elementos de la lista
    deleteNode(&head, 30);
    deleteNode(&head, 50);

    // Imprimir la lista después de eliminar nodos
    printForward(head);
    printBackward(head);

    return 0;
}
