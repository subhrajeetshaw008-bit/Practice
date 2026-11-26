//1.WACP to create a circular queue using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL,*rear = NULL;
void enqueue()
{
    struct node *newnode;
    int value;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d", &value);
    newnode->data = value;

    if (front == NULL)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
    printf("Element inserted successfully.\n");
}

void dequeue()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("Queue is Empty!\n");
    }
    else if (front == rear)
    {
        temp = front;
        printf("Deleted element: %d\n", front->data);
        front = rear = NULL;
        free(temp);
    }
    else
    {
        temp = front;
        printf("Deleted element: %d\n", front->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if (front == NULL)
    {
        printf("Queue is Empty!\n");
    }
    else
    {
        temp = front;
        printf("Circular Queue: ");

        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != front);
        printf("\n");
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Circular Queue Using Linked List ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
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
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
