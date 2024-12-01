#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks :");
    scanf("%d",&marks);
    (marks>=35 && marks<=100)? printf("PASS"):printf("FAIL");
    return 0;
}