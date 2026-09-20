/*Complete the function int parking fee(int hours) to compute the parking
fee based on the following rules:
• The first 2 hours are charged at Rs.20 per hour.
• Every additional hour is charged at Rs.30 per hour.
• If hours is 0, the parking fee is Rs.0.
Input
A single integer hours, representing the number of hours a vehicle was
parked.
Output
Print the parking fee, calculated according to the formula.*/

#include <stdio.h>
int parking_fee(int hours){
    if (hours <=0)
        return 0;
    if (hours <=2)
        return hours*20;
    return 40 + (hours-2) * 30;      
}

int main (){
    int hours;
    printf("Enter hours:");
    scanf("%d",&hours);
    printf("%d",parking_fee(hours));
    return 0;
}

