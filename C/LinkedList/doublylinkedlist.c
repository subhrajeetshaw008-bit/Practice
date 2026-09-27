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
/*struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);*/

int main(){
    int option;
    do{
        printf("\n\n **** MAIN MENU ****\n");
        printf("\n 1. Create a Linked List");
        printf("\n 2. Display a Linked List");
       /* printf("\n 3. Insert a node at the beginning");
        printf("\n 4. Insert a node at the end");
        printf("\n 5. Insert a node before any given node");
        printf("\n 6. Insert a node after any given node");*/
        printf("\n 3.EXIT");
        printf("\n Enter the option: ");
        scanf("%d", &option);
        while (getchar() != '\n');  
        switch (option){
             case 1: start = create_ll(start);
                    printf("\n Circular linked list is created....");
                    break;
            case 2: start = display(start);
                    break;
           /* case 3: start = insert_beg(start);
                    break;
            case 4: start = insert_end(start);
                    break;
            case 5: start = insert_before(start);
                    break;  
            case 6: start = insert_after(start);
                    break;   */   
        }
    }
    while (option != 3);
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
