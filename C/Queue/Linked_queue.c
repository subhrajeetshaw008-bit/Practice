//WACP to implement a linked queue


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

struct node *enqueue(struct node *);
struct node *dequeue(struct node *);
struct node *display(struct node *);

int main()
{
    int option;

    do
    {
        printf("\n 1. Insert");
        printf("\n 2. Delete");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice:");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                start = enqueue(start);
                break;

            case 2:
                start = dequeue(start);
                break;

            case 3:
                start = display(start);
                break;

            case 4:
                printf("\n Exiting...");
                break;

            default:
                printf("\n Invalid Choice!");
        }

    } while(option != 4);

    return 0;
}

struct node *enqueue(struct node *start)
{
    struct node *new_node, *ptr;
    int num;

    printf("\n Enter the data to the node:");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\n Memory allocation failed!");
        return start;
    }

    new_node->data = num;
    new_node->next = NULL;

    if(start == NULL)
    {
        start = new_node;
    }
    else
    {
        ptr = start;

        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }

        ptr->next = new_node;
    }

    printf("\n Element inserted successfully!");
    return start;
}

struct node *dequeue(struct node *start)
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\n Queue is Empty!");
    }
    else
    {
        ptr = start;

        printf("\n The element to be deleted is: %d", ptr->data);

        start = start->next;
        free(ptr);
    }

    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("\n Queue is Empty!");
    }
    else
    {
        ptr = start;

        printf("\n Queue Elements are:");

        while(ptr != NULL)
        {
            printf("\t%d", ptr->data);
            ptr = ptr->next;
        }
    }

    return start;
}
