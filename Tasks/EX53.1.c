/*Write a C program to Create stack is a linear data structure, collection of items of the same type. Stack follows the Last in First Out
(LIFO) fashion wherein the last element entered is the first one to be popped out. In stacks, the insertion (push) and deletion(pop) of
elements happen only at one endpoint of it.
Represent the stack as static array

*/

#include<stdio.h>
#define MAX 100

typedef struct
{
    int data[MAX];
    int top;

}Stack;
void initStack(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int item);
int pop(Stack *s);
void display(Stack *s);

int main() {
    Stack s;
    int choice, item;
    initStack(&s);
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to push: ");
                scanf("%d", &item);
                push(&s, item);
                break;

            case 2:
                pop(&s);
                break;

            case 3:
                display(&s);
                break;

            case 4:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void initStack(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d.\n", item);
        return;
    }
    s->top++;
    s->data[s->top] = item;
    printf("Pushed %d onto the stack.\n", item);
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    }
    int item = s->data[s->top];
    s->top--;
    printf("Popped %d from the stack.\n", item);
    return item;
}

void display(Stack *s) {
   int i;
    if (isEmpty(s)) {
        printf("The stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");
    for (i = s->top; i >= 0; i--) {
        printf("%d\n", s->data[i]);
    }
}
