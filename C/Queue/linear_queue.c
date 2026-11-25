//WACP to implement a Linear queue

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int queue[MAX];
int front = -1,rear = -1;

void enqueue(int value){
    if(rear==MAX-1){
        printf("\n OVERFLOW")
    }
    else{
        if(front == -1 && rear == -1){
            front = 0;
            rear = 0;
        }
        else{
            rear = rear + 1;
        }
        queue[rear] = value;
        printf("\n %d is inserted into the queue",value);
    }
}

void dequeue(){
    if(front == -1 || front>rear){
        printf("\n UNDERFLOW");
    }
    else{
        printf("\n The element to be deleted is : %d",queue[front]);
        front = front + 1;

        if(front > rear){
            front = -1;
            rear = -1;
        }
    }
}

void display(){
    int i;
    if(front == -1){
        printf("\n Queue is Empty");
    }
    else{
        printf("\n Queue Element:");
        for(i=front;i<=rear;i++){
            printf("\n %d",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    int choice,value;
    while(1){
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("\n Enter the value to be inserted : ");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\n Invalid Choice");
        }
    }
}