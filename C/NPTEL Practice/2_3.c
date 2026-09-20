//Check if a matrix is upper triangular

#include <stdio.h>
int main(){
    int i,j,n;
    printf("Enter rows and columns:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter terms:");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(matrix[i][j]!=0){
                printf("0");
                return 0;
            }
        }
    }
    printf("1");
    return 0;
}