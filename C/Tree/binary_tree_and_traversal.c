//2.WACP to create a binary tree and perform the traversal

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node* create()
{
    int value;
    struct node *newnode;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &value);

    if (value == -1)
        return NULL;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    printf("Enter left child of %d:\n", value);
    newnode->left = create();
    printf("Enter right child of %d:\n", value);
    newnode->right = create();
    return newnode;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    struct node *root;
    printf("Create Binary Tree:\n");
    root = create();
    printf("\nInorder Traversal: ");
    inorder(root);
    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\nPostorder Traversal: ");
    postorder(root);
    return 0;
}
