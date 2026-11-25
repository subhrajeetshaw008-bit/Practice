//Circular Queue using stack


#include <stdio.h>
#include <stdlib.h>

#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int value)
{
    if((rear + 1) % size == front)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front == -1)
            front = 0;

        rear = (rear + 1) % size;
        queue[rear] = value;

        printf("%d inserted\n", value);
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted element is: %d\n", queue[front]);

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        i = front;
        printf("Queue: ");

        while(1)
        {
            printf("%d ", queue[i]);

            if(i == rear)
                break;

            i = (i + 1) % size;
        }
    }
}

int main()
{
    int ch, value;

    while(1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter choice: ");

        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value:");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice");
        }
    }
}
