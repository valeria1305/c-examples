#include <stdio.h>
#include <stdlib.h>

// Definition of the node structure
typedef struct node {
    int val;
    struct node *next;
} node_t;

// Function to print the list
void print_list(node_t *head) {
    node_t *current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to append a node to the end of the list
void append(node_t *head, int val) {
    node_t *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

// Function to prepend a node to the beginning of the list
node_t *prepend(node_t *head, int val) {
    node_t *new_node = (node_t *) malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = head;
    return new_node;
}

// Function to delete the first node
node_t *delete_first(node_t *head) {
    if (head == NULL) return NULL;
    node_t *new_head = head->next;
    free(head);
    return new_head;
}

// Function to delete a node by index
void delete_by_index(node_t **head, int index) {
    if (*head == NULL) return;

    node_t *current = *head;
    node_t *previous = NULL;

    // If the head is to be removed
    if (index == 0) {
        *head = current->next; // Move the head to the next node
        free(current); // Free the old head
        return;
    }

    // Traverse to the node before the one to be deleted
    for (int i = 0; current != NULL && i < index; i++) {
        previous = current;
        current = current->next;
    }

    // If the node to be deleted is out of range
    if (current == NULL) return;

    // Unlink the node and free memory
    previous->next = current->next;
    free(current);
}

int main() {
    // Initialize the list with some nodes
    node_t *head = (node_t *) malloc(sizeof(node_t));
    head->val = 1;
    head->next = NULL;
    
    append(head, 2);
    append(head, 3);
    append(head, 4);

    printf("Original List: ");
    print_list(head);

    // Delete the node at index 2 (third node)
    delete_by_index(&head, 2);

    printf("List after deleting index 2: ");
    print_list(head);

    // Prepend a node to the list
    head = prepend(head, 0);

    printf("List after prepending 0: ");
    print_list(head);

    // Delete the first node
    head = delete_first(head);

    printf("List after deleting the first node: ");
    print_list(head);

    return 0;
}
