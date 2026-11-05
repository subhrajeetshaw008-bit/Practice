#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// Stack implementation
char stack[MAX];
int top = -1;

void push(char item) {
    if (top >= MAX - 1) return;
    stack[++top] = item;
}

char pop() {
    if (top < 0) return -1;
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

// Function to reverse a string and swap parentheses
void reverse(char* exp) {
    int len = strlen(exp);
    int i;
    
    // Reverse the string
    for (i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
    
    // Swap '(' with ')' and vice versa
    for (i = 0; i < len; i++) {
        if (exp[i] == '(') {
            exp[i] = ')';
        } else if (exp[i] == ')') {
            exp[i] = '(';
        }
    }
}

// Main function to convert Infix to Prefix
void infixToPrefix(char* expression) {
    int i, j = 0;
    char result[MAX];

    // Step 1: Reverse the infix expression
    reverse(expression);

    // Step 2: Infix to Postfix conversion (modified for prefix)
    for (i = 0; expression[i]; i++) {
        char c = expression[i];

        // If the character is an operand, add it to result
        if (isalnum(c)) {
            result[j++] = c;
        }
        // If it's '(', push to stack
        else if (c == '(') {
            push(c);
        }
        // If it's ')', pop until '('
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[j++] = pop();
            }
            pop(); // Remove '('
        }
        // If an operator is scanned
        else {
            // Note the strict `<` instead of `<=`. 
            // We only use `<=` for '^' (right-associative) to maintain correct order.
            while (top != -1 && 
                  (precedence(c) < precedence(stack[top]) || 
                  (precedence(c) == precedence(stack[top]) && c == '^'))) {
                result[j++] = pop();
            }
            push(c);
        }
    }

    // Pop remaining operators
    while (top != -1) {
        result[j++] = pop();
    }
    result[j] = '\0';

    // Step 3: Reverse the result to get the final Prefix expression
    reverse(result);

    printf("Prefix Expression: %s\n", result);
}

int main() {
    char expression[MAX];
    
    // Take user input
    printf("Enter an infix expression (no spaces): ");
    scanf("%s", expression);
    
    infixToPrefix(expression);
    
    return 0;
}
