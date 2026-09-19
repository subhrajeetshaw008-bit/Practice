//WACP with 2 integers and perform +,-,*,/

#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);
    printf("Enter operator (+,-,*,/):");
    scanf(" %c",&op);
    if(op=='+'){
        printf("%d",a+b);}    
    else if(op=='-'){
        printf("%d",a-b);}
    else if(op=='*'){
        printf("%d",a*b);}
    else if(op=='/'){
        printf("%d",a/b);}
    else{
        printf("Invalid operator");
    }            
    return 0;
}    