#include "Node.h"

void insertNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
    printf("Node inserted.\n");
}
