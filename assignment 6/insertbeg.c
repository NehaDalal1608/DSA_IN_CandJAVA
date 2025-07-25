#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void insertBetween(struct Node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(data);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);

    printf("Original Linked List: ");
    displayList(head);

    
    insertBetween(head->next, 3);

    printf("Linked List after Insertion: ");
    displayList(head);

    return 0;
}

/*Original Linked List: 1 -> 2 -> 4 -> NULL
Linked List after Insertion: 1 -> 2 -> 3 -> 4 -> NULL*\

