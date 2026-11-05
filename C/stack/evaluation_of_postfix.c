#include <stdio.h>
#include <stdlib.h>
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

// Function to evaluate the postfix expression
int evaluatePostfix(char* expression) {
    int i;
    
    for (i = 0; expression[i]; i++) {
        char c = expression[i];

        // 1. If the character is an operand (digit), push it to the stack.
        // We subtract '0' to convert the character into an actual integer.
        if (isdigit(c)) {
            push(c - '0');
        }
        // 2. If the character is an operator, pop two elements and apply the operator.
        else {
            int val1 = pop(); // Top element (right operand)
            int val2 = pop(); // Second top element (left operand)
            
            switch (c) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': 
                    if (val1 == 0) {
                        printf("Error: Division by zero\n");
                        exit(1);
                    }
                    push(val2 / val1); 
                    break;
                case '^': push((int)pow(val2, val1)); break;
            }
        }
    }
    
    // The final result is the only element remaining in the stack
    return pop();
}

int main() {
    char expression[MAX];
    
    printf("Enter a postfix expression (single digits, no spaces): ");
    scanf("%s", expression);
    
    int result = evaluatePostfix(expression);
    printf("Result of evaluation: %d\n", result);
    
    return 0;
}
