#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    int n = 5; 
    int arr[n]; 
    struct node* head = NULL; 

 
    printf("Array:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        struct node* new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = arr[i];
        new_node->next = head;
        head = new_node;
    }

    
    printf("Linked List:\n");
    struct node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

  
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

