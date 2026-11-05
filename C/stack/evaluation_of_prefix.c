#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

// Integer stack for evaluation
int stack[MAX];
int top = -1;

void push(int item) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

// Function to evaluate the prefix expression
int evaluatePrefix(char* expression) {
    int i;
    int len = strlen(expression);
    
    // Read the expression from Right to Left
    for (i = len - 1; i >= 0; i--) {
        char c = expression[i];

        // 1. If the character is an operand (digit), push it to the stack.
        // We subtract '0' to convert the character into an actual integer.
        if (isdigit(c)) {
            push(c - '0');
        }
        // 2. If the character is an operator, pop two elements and apply the operator.
        else {
            int val1 = pop(); // Top element (Left operand)
            int val2 = pop(); // Second top element (Right operand)
            
            switch (c) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': 
                    if (val2 == 0) {
                        printf("Error: Division by zero\n");
                        exit(1);
                    }
                    push(val1 / val2); 
                    break;
                case '^': push((int)pow(val1, val2)); break;
            }
        }
    }
    
    // The final result is the only element remaining in the stack
    return pop();
}

int main() {
    char expression[MAX];
    
    // Take user input
    printf("Enter a prefix expression (single digits, no spaces): ");
    scanf("%s", expression);
    
    int result = evaluatePrefix(expression);
    printf("Result of evaluation: %d\n", result);
    
    return 0;
}
