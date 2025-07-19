#include "Node.h"

void traverseList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
