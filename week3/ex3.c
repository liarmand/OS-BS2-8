#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* pointer;
};


void insert_node(struct Node* head, int* size, int pos, int val){
    struct Node* current = head;
    if (pos > *size) {
        if ( pos - *size == 1){
            while (current->pointer !=NULL)  {
                current = current->pointer;
            }
            current->pointer = malloc(sizeof(struct Node));
            current->pointer->value = val;
            current->pointer->pointer = NULL;
            *size += 1;
        } else { printf("Node number %d does not exist. You cannot add current node", val-1);}
    } else {
        for (int i=1;i < pos -2; i++){
            current = current->pointer;
        }
            struct Node* temp = current->pointer;
            current->pointer = malloc(sizeof(struct Node));
            current->pointer->value = val;
            current->pointer->pointer = temp;
            *size += 1;
    }
}

void delete_node(struct Node* head, int* size, int pos){
    struct Node* current = head;
    if (pos > *size) { printf("This element does not exist\n");}
    else {
        for (int i = 1; i < pos - 1; i++) {
            current = current->pointer;
        }
        if (current->pointer->pointer == NULL) {
            current->pointer = NULL;
        } else {
            current->pointer = current->pointer->pointer;
        }
        *size -= 1;
    }
}

void print_list(struct Node* head){
    struct Node* current = head;
    while (current->pointer != NULL) {
        printf("%d ", current->value);
        current = current->pointer;
    }
    printf("%d", current->value);
}

int main(){

    struct Node* head;

    head = malloc(sizeof(struct Node));

    head->value = 1;

    head->pointer = NULL;

    int size = 1;

    insert_node(head, &size, 2, 5);

    insert_node(head, &size, 2, 3);

    insert_node(head, &size, 4, 10);

    delete_node(head, &size, 3);

    print_list(head);

    return 0;

}
