/*Write a C program to
(i) create and display a doubly linked list
(ii) insert a node at the beginning
(iii) insert a node at the end
(iv) insert a node before any node
(v) insert a node after any node
(vi) delete the first node
(vii) delete the last node
(viii) delete a node after any given node
(ix) delete a node before any given node
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);

int main(){
    int option;
    do{
        printf("\n\n **** MAIN MENU ****\n");
        printf("\n 1. Create a Linked List");
        printf("\n 2. Display a Linked List");
        printf("\n 3. Insert a node at the beginning");
        printf("\n 4. Insert a node at the end");
        printf("\n 5. Insert a node before any given node");
        printf("\n 6. Insert a node after any given node");
        printf("\n 7. Delete the first node");
        printf("\n 8. Delete the last node");
        printf("\n 9. EXIT");
        printf("\n Enter the option: ");
        scanf("%d", &option);
        while (getchar() != '\n');  
        switch (option){
             case 1: start = create_ll(start);
                    printf("\n Circular linked list is created....");
                    break;
            case 2: start = display(start);
                    break;
            case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = insert_before(start);
                    break;  
            case 6: start = insert_after(start);
                    break;   
            case 7: start = delete_beg(start);
                    break;
            case 8: start = delete_end(start);
                    break;                
        }
    }
    while (option != 9);
    return 0;
}

struct node *create_ll(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("\n Enter -1 to EXIT");
    printf("\n Enter the data in the node: ");
    scanf("%d", &num);
    while (num!=-1){
        if(start==NULL){
            new_node=(struct node *)malloc(sizeof(struct node));
            new_node->prev=NULL;
            new_node->data=num;
            new_node->next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            new_node=(struct node *)malloc(sizeof(struct node));
            new_node->data=num;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=new_node;
            new_node->prev=ptr;
            new_node->next=NULL;
        }
        printf("Enter data in node:");
        scanf("%d",&num);
    }
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=start;
    new_node->prev=NULL;
    start->prev=new_node;
    start=new_node;
    return start;
}

struct node *insert_end(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    new_node->data=num;
    new_node->prev=ptr;
    new_node->next=NULL;
    ptr->next=new_node;
    return start;
}

struct node *insert_before(struct node *start){
    struct node *new_node,*ptr,*preptr;
    int num,val;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    printf("Enter the data before which the node will be entered:");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr=start;
    while(ptr->data!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    new_node->data=num;
    preptr->next=new_node;
    ptr->prev=new_node;
    new_node->prev=preptr;
    new_node->next=ptr;
    return start;
}

struct node *insert_after(struct node *start){
    struct node *new_node,*ptr;
    int num,val;
     printf("Enter the data to the node:");
    scanf("%d",&num);
    printf("Enter the data after which the node will be entered:");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    ptr=start;
    while(ptr->data!=val){
        ptr=ptr->next;
    }
    new_node->data=num;
    new_node->prev=ptr;
    new_node->next=ptr->next;
    ptr->next->prev=new_node;
    ptr->next=new_node;
    return start;
}

struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr=start;
    ptr->next->prev=NULL;
    start=start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    free(ptr);
    return start;
}