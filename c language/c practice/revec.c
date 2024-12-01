#include<stdio.h>
int main ()
{
    int n,rem,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0){
     rem=n%10;
     r=r*10+rem;
     n=n/10;
    }
    printf("reverce is %d",r);
    return 0;
}