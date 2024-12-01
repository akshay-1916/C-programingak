#include<stdio.h>
int main()
{
    int n,d,k=0;
    printf("Enter the number:");
    scanf("%d",&n);

    while(n>0){
       
       d=n%10;
       k=k+d;
       n=n/10;

    }
    printf("addition of digit :%d",k);
    return 0;
}