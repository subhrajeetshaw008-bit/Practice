/*Write a C program to
(i) create and display a circular linked list
(ii) insert a node at the beginning
(iii) insert a node at the end
(iv) delete the first node
(v) delete the last node
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

int main() {
    int option;
    do {
        printf("\n\n **** MAIN MENU ****\n");
        printf("\n 1. Create a Linked List");
        printf("\n 2. Display a Linked List");
        printf("\n 3. Insert a node at the beginning");
        printf("\n 4. Insert a node at the end");
        printf("\n 5. Delete the first node");
        printf("\n 6. Delete the last node");
        printf("\n 7. EXIT");
        printf("\n Enter the option: ");
        scanf("%d", &option);
        switch (option) {
            case 1: start = create_ll(start);
                    printf("\n Circular linked list is created....");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = delete_beg(start);
                    break;
            case 6: start = delete_end(start);
                    break;
        }
    } while (option != 7);
    return 0;
}

struct node *create_ll(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter -1 to EXIT");
    printf("\n Enter the data in the node: ");
    scanf("%d", &num);
    while (num != -1) {
        new_node = (struct node *) malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL) {
            new_node->next = new_node;
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != start) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = start;
        }
        printf("\n Enter the data in the Node: ");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != start) {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\t %d", ptr->data);
    return start;
}

struct node *insert_beg(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data to the node: ");
    scanf("%d", &num);
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->next != start) {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data to the node: ");
    scanf("%d", &num);
    new_node = (struct node *) malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->next != start) {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = start;
    return start;
}

struct node *delete_beg(struct node *start) {
    struct node *ptr;
    ptr = start;
    while (ptr->next != start) {
        ptr = ptr->next;
    }
    ptr->next = start->next;
    free(start);
    start = ptr->next;
    return start;
}

struct node *delete_end(struct node *start) {
    struct node *ptr, *preptr;
    ptr = start;
    while (ptr->next != start) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = start;
    free(ptr);
    return start;
}