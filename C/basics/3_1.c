//Complete the function int find_factorial(int k) to find factorial of positive integer k

#include <stdio.h>
int find_factorial(int k){
int p=1;
for(int i=1;i<=k;i++){
    p*=i;
}
return p;}

int main(){
    int n,k;
    printf("No of terms:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter terms:");
        scanf("%d",&k);
        printf("%d",find_factorial(k));
        if (i<n-1)
            printf(" ");
    }
    return 0;
}