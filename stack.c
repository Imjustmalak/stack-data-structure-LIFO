#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void push(struct Node** p) {
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter the data :");
    scanf("%d",&newNode->data);
    newNode->next = *p;

    *p = newNode;
}


int pop(struct Node** p) {
    
    if (*p== NULL) {
        printf("Stack is empty");
        
    }

    
    int data = (*p)->data;
    struct Node* temp = *p;
    *p = (*p)->next;
    free(temp);

    
    return data;
}

int is_empty(struct Node* head) {
    return head == NULL;
}

int main() {
    struct Node* head = NULL;
    int n;
    printf("enter the number of elements you want to store :");
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        
    push(&head);
   

    }

    

    
    while (!is_empty(head)) {
        printf("%d\n", pop(&head));
    }

    
    printf("%d\n", pop(&head));

    return 0;
}
