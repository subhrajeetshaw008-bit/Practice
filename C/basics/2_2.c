//Read n number and determine the length of longest consecutive even numbers

#include<stdio.h>
int main(){
    int i,n,x,longest=0,current=0;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the terms");
        scanf("%d",&x);
        if(x%2==0){
            current++;
            if(current>longest)
                longest=current;}
            else
                current=0;    
        }
        printf("%d",longest);
        return 0;
    }


