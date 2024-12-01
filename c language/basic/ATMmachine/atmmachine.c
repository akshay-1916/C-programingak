#include<stdio.h>
int main(){
printf("     WELCOME TO ATM\n");

float n,s;
char ch;

printf("enter initial amount :");
scanf("%f",n);

printf("ENTER \n a.credit \n b.debit \n c.balance");
scanf("%c",&ch);

switch(ch){
    case 'a':
    printf("Enter Credit Amount");
    scanf("%f",&s);
    n=n+s;
    printf("New Amount is %f",n);
    break;

    case 'b':
    printf("Enter the debit amount \n");
    scanf("%f",&s);
    if(n>s){
    n=n-s;
    printf("New amount = %f",n);
    }

    else{
        printf("Insufficient amount in your Account");
    }
    break;
    case 'c':
    printf("Amount in your Acount =%f",n);

    default:printf("Choose correct operation for operation");

}

return 0;
}