//read n numbers and produce alternating sum

#include <stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter no of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            sum -=i;
        else
            sum +=i;
    }
    printf("%d",sum);
    return 0;
}