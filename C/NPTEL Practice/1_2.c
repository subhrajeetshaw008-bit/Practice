//Write a C program that reads a person's current age and the year in which the election will be held and determine whether this person will be able to vote or not.

#include <stdio.h>
int main(){
    int age,year,electionage;
    printf("Current Age is:");
    scanf("%d",&age);
    printf("Enter Current Year:");
    scanf("%d",&year);
    electionage=age+(year-2026);
    if(electionage>=18){
        printf("Individual is eligible to vote");
    }
    else{
        printf("Individual cannot vote");
    }
    return 0;
}