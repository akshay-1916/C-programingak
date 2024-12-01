#include"string.h"
#include<stdio.h>
int main (){
    char fname[60];
    char lname[60];
    printf("enter the name :");
    gets(fname);

    strcpy(lname,fname);

    printf("%s",lname);
 
return 0;
}