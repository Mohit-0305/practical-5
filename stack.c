#include <stdio.h>

#define MAX 10  
int stack[MAX];
int top = -1;  

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
    }
    else {
        printf("Enter an Element to add: ");
        top++;
        scanf("%d", &stack[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
    } 
    else {
        top--;
    }
}

void print() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } 
    else {
        printf("Stack elements are: ");
        for (int i = top; i > -1; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main() {
    int cases;
    
    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print \n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &cases);

        switch (cases) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (cases != 4);
}