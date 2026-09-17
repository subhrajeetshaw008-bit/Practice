//Calculate the Volume of Cuboid

#include <stdio.h>
int main(){
    int length,breadth,height,volume;
    printf("Enter Length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);
    printf("Enter height:");
    scanf("%d",&height);
    volume=length*breadth*height;
    printf("The Volume is: %d",volume);
    return 0;
}