#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Stack implementation
char stack[MAX];
int top = -1;

void push(char item) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

char pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

// Function to return precedence of operators
int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}

// Main function to convert Infix to Postfix
void infixToPostfix(char* expression) {
    int i, j = 0;
    char result[MAX];

    for (i = 0; expression[i]; i++) {
        char c = expression[i];

        // 1. If the scanned character is an operand, add it to the output.
        if (isalnum(c)) {
            result[j++] = c;
        }
        // 2. If the scanned character is an '(', push it to the stack.
        else if (c == '(') {
            push(c);
        }
        // 3. If the scanned character is an ')', pop and output from the stack 
        // until an '(' is encountered.
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[j++] = pop();
            }
            pop(); // Remove the '(' from the stack
        }
        // 4. If an operator is scanned
        else {
            while (top != -1 && precedence(c) <= precedence(stack[top])) {
                // To handle right associativity of '^'
                if (c == '^' && stack[top] == '^') {
                    break; 
                }
                result[j++] = pop();
            }
            push(c);
        }
    }

    // Pop all the remaining operators from the stack
    while (top != -1) {
        result[j++] = pop();
    }

    result[j] = '\0'; // Null terminate the string
    printf("Postfix Expression: %s\n", result);
}

int main() {
    char expression[MAX];
    
    // Take user input
    printf("Enter an infix expression (no spaces): ");
    scanf("%s", expression);
    
    infixToPostfix(expression);
    
    return 0;
}
