#include<stdio.h>
int main(){
int n,i,j;
printf("enter the last number");
scanf("%d",&n);

for(i=1;i<=10;i++){
for(j=1;j<=n;j++){
        printf("  %d",j*i);
}
printf("\n");
}
return 0;
}