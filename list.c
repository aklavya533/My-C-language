#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Push operation
void push(struct Node** top, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = *top;   // link new node to current top
    *top = newNode;         // update top
    printf("%d pushed to stack\n", value);
}

// Pop operation
int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack Underflow\n");
        return -1; // returning -1 if stack is empty
    }
    struct Node* temp = *top;
    int popped = temp->data;
    *top = (*top)->next; // move top to next
    free(temp);
    return popped;
}

// Peek operation
int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

// Display stack
void display(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    struct Node* top = NULL; // initially stack is empty

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    display(top);

    printf("%d popped from stack\n", pop(&top));
    display(top);

    printf("Top element is %d\n", peek(top));

    return 0;
}
