#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 1000
#define MAX_STACK_SIZE 1000

char stack[MAX_STACK_SIZE];
int top = -1;

int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX_STACK_SIZE - 1;
}
void push(char c) {
    if (isFull()) {
        return;
    }
    stack[++top] = c;
}
char pop() {
    if (isEmpty()) {
        return '\0';
    }
    return stack[top--];
}
int checkParentheses(char* sequence) {
    char c;
    while ((c = *sequence++) != '@') {
        if (c == '(' || c == '[' || c == '{') {
            push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            char topChar = pop();
            if ((c == ')' && topChar != '(') || 
                (c == ']' && topChar != '[') || 
                (c == '}' && topChar != '{')) {
                return 0;
            }
        }
    }
    return isEmpty();
}

int main() {
    char sequence[MAX_LENGTH + 1];
    fgets(sequence, MAX_LENGTH + 1, stdin);
    if (checkParentheses(sequence)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
