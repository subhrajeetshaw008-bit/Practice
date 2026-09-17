/*1.Write a C program to create a singly linked list and perform all insertion operations
  (a)Create and Display a Linked List
  (b)Insert a node at the beginning 
  (c)Insert a node at the end
  (d)Insert a node before any given node
  (e)Insert a node after any given node */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *create_ll(struct node *);
struct node *display (struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);

//MAIN MENU
int main(){
    int option;
    do{
        printf("\n\n****MAIN MENU****");
        printf("\n1.Create a Linked List");
        printf("\n2.Display a Linked List");
        printf("\n3.Insert a node at the beginning");
        printf("\n4.Insert a node at the end");
        printf("\n5.Insert a node before any given node");
        printf("\n6.Insert a node after any given node");
        printf("\n7.EXIT");
        printf("\nEnter the option:");
        scanf("%d",&option);
        switch(option){
            case 1:start=create_ll(start);
                printf("\n The Linked List is created...");
                break;
            case 2:start=display(start);
                break;    
            case 3:start=insert_beg(start);
                break;
            case 4:start=insert_end(start);
                break;
            case 5:start=insert_before(start);
                break;
            case 6:start=insert_after(start);
                break;}        
    }
    while(option!=7);
    return 0;
}

//Creating a Linked List
struct node *create_ll(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("Enter -1 to EXIT");
    printf("\n Enter the data in the node:");
    scanf("%d",&num);
    while(num!=-1){
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node -> data = num;
        if(start==NULL){
            new_node-> next=NULL;
            start=new_node;
        }
        else{
            ptr=start;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            } 
            ptr->next=new_node;
            new_node->next=NULL;
        }
        printf("\n Enter the data in the NODE:");
        scanf("%d",&num);
    }
    return start;
}

//Display a Linked List
struct node *display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("\t %d",ptr->data);
        ptr = ptr->next;
    }
    return start;
}

//Insert a node at the beginning of Linked List
struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
}

//Insert a node at the end of Linked List
struct node *insert_end(struct node *start){
    struct node *new_node,*ptr;
    int num;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr=start;
    while(ptr-> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = new_node;
    return start;
}

//Insert a node before any given node of Linked List
struct node *insert_before(struct node *start){
    struct node *new_node,*ptr,*preptr;
    int num,val;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    printf("Enter the number before which the data is to be entered");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr=start;
    while(ptr-> data != val){
        preptr=ptr;
        ptr = ptr -> next;
    }
    preptr -> next = ptr;
    new_node -> next=ptr;
    return start;
}

//Insert a node after any given node of Linked List
struct node *insert_after(struct node *start){
    struct node *new_node,*ptr;
    int num,val;
    printf("Enter the data to the node:");
    scanf("%d",&num);
    printf("Enter the number before which the data is to be entered");
    scanf("%d",&val);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr=start;
    while(ptr->data != val){
        ptr = ptr -> next;
    }
    new_node -> next = ptr->next;
    ptr -> next = new_node;
    return start;
}