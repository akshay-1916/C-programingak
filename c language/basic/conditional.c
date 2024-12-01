#include<stdio.h>
int main(){
    int a=80,b=80,c;
    a&&b ? printf("condition is True\n"):printf("condition is False\n");
    (a || b) ?printf("condition is True\n"):printf("condition is False\n");
    !(a&&b)?printf("condition is True\n"):printf("condition is False\n");
return 0;
}