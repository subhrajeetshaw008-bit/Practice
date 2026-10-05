/*Write a C program to
    (i)Implement stack using linked list
    (ii)push pop and display the stack
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct stack{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *,int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);

int main(){
    int option,val;
    do{
          printf("\n\n****MAIN MENU****");
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. DISPLAY");
        printf("\n 4. EXIT");
        printf("\n Enter Option:");
        scanf("%d",&option);
        switch (option){
            case 1: printf("Enter the number to be pushed:");
                    scanf("%d",&val);
                    break;
            case 2: top=pop(top);
                    break;
            case 3: top=display(top);
                    break;        
        }
    }
    while(option!=4);
    return 0;
}

struct stack *push(struct stack *top,int val){
    struct stack *ptr;
    
}