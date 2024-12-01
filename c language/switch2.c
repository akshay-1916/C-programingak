#include<stdio.h>
int  main ()
{
    int a,b,c;
  
    printf("1.add \n 2.substract \n");
    scanf("%d",&a);

    switch(a){
        case 1:printf("enter two number :");
        scanf("%d%d",&b,&c);
        printf("addition is %d",b+c);
        break;
        
        case 2:
        printf("enter two number :");
        scanf("%d%d",&b,&c);
        printf("Substraction  is %d",b-c);
        break;
        
        default:printf("Please enter coorect option");
    }
 return 0;
}
        