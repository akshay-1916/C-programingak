#include<stdio.h>
int main() {
printf(" 1.addition \n 2.substract \n 3.multiplication \n 4.divide \n 5.modulus\n");

int ch,n1,n2;
printf("enter your Choice :");
scanf("%d",&ch);

switch(ch) {
    case 1: printf("enter the two numbers :");
    scanf("%d%d",&n1,&n2);
    printf("%d+%d=%d",n1,n2,n1+n2);
    break;

    case 2: printf("enter the two numbers :");
    scanf("%d%d",&n1,&n2);
    printf("%d-%d=%d",n1,n2,n1-n2);
    break;

case 3: printf("enter the two numbers :");
    scanf("%d%d",&n1,&n2);
    printf("%d*%d=%d",n1,n2,n1*n2);
    break;


case 4: 
        printf("enter the two numbers");
        scanf("%d%d",&n1,&n2);
        if(n2==0){
            printf("math error");
        }
        else{
            printf("%d/%d=%d",n1,n2,n1/n2);

        }
        break;
        case 5: printf("enter the two numbers");
                scanf("%d%d",&n1,&n2);
                printf("%d modulo %d=%d",n1,n2,n1%n2);
                break;

        default:printf("please enter correct choice");

}

return 0;
}

    


        
        
    
   



