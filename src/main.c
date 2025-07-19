#include "Node.h"
#include "main.h"

Node *head = NULL;
int main() {
    int choice, value;
    while (1) {
        printf("\n--- LINKED LIST MENU ---\n");
        printf("1. Insert Node\n2. Delete Node\n3. Traverse\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter value: ");
                scanf("%d", &value);
                insertNode(value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 3:
                traverseList();
                break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}
