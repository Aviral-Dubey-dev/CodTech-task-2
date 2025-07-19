#include "Node.h"

void deleteNode(int value) {
    Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        printf("Node deleted.\n");
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found.\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node deleted.\n");
}
