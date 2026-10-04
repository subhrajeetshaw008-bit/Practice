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
}