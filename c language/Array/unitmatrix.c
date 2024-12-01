#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c;
    printf("enter the row and colume value :");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){ 
            if(i==j){
                a[i][j]=1;
            }
            if(i!=j){
                a[i][j]=0;
            }
        }
    }

    printf("Unit matrix is \n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
return 0;
}