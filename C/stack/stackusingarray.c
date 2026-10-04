/* Write a C program to 
    (i)Implement a stack using array
    (ii)push pop peek operation on a stack
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int stack [MAX],top=-1;
void push(int stack[],int val);
int pop (int stack[]);
int peek (int stack[]);
void display (int stack[]);

int main(){
    int val,option;
    do{
        printf("\n\n****MAIN MENU****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEK");
        printf("\n 4. DISPLAY");
        printf("\n 5. EXIT");
        printf("\n Enter Option:");
        scanf("%d",&option);
        switch (option){
            case 1: printf("Enter the number to be pushed into the stack:");
                    scanf("%d",&val);
                    push(stack,val);
                    break;
            case 2: val = pop (stack);
                    if (val != -1){
                        printf("The number that was deleted from top was : %d",val);
                    }        
                    break;
            case 3: val = peek (stack);
                    if (val != -1){
                        printf("The number stored at the top of stack is : %d",val);
                    }        
                    break;
            case 4: display (stack);
                    break;        
        }
    }
    while (option !=5);
    return 0;
}

void push (int stack [],int val){
    if (top == MAX-1){
        printf("\n OVERFLOW");
    }
    else {
        top ++;
        stack [top] = val;
    }
}

int pop (int stack []){
    int val;
    if (top==-1){
        printf("\n UNDERFLOW");
        return -1;
    }
    else {
        val = stack[top];
        top--;
        return val;
    }
}

int peek (int stack[]){
    if (top==-1){
        printf("\n Empty Stack");
        return -1;
    }
    else {
        return (stack[top]);
    }
}

void display (int stack[]){
    int i;
    if (top == -1){
        printf("\n Empty Stack");
    }
    else{
        for (i=top;i>=0;i--){
            printf("\n%d",stack[i]);
        }
    }
}