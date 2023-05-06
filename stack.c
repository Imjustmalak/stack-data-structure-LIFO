
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** top, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty.\n");
       
    }
    int data = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

int is_empty(struct Node* top) {
    return top == NULL;
}

int the_top(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

int main() {
    struct Node* top = NULL;
    int n, data;
    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the data for element %d: ", i+1);
        scanf("%d", &data);
        push(&top, data);
    }

    printf("Elements in the stack: ");
    while (!is_empty(top)) {
        printf("%d  \n ", the_top(top));
        pop(&top);
    }
    


}
