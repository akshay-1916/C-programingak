#include<stdio.h>
int main() {
printf("AREA  CALCULATER\n");

    printf("1.square \n2.Rectangle\n3.Circle\n4.Triangle\n");
    int n;
    int s1,s2;
    printf("enter the choice :");
    scanf("%d",&n);

    switch(n){
        case 1: printf("enter the measurement of side of Square :");
        scanf("%d",&s1);
        printf("Area of Square is :%d",s1*s1);
        break;

        case 2:printf("enter the length and breath :");
        scanf("%d%d",&s1,&s2);

        printf("area of Rectangle :%d",s1*s2);
        break;

        case 3:
          printf("enter the Redius of Circle :");
          scanf("%d",&s1);
          printf("Area of circle is %f",(float)3.14*s1*s1);
break;
          case 4:printf("entre the height and breath");
          scanf("%d%d",&s1,&s2);
          printf("Area of Triangle :%f",(float)0.5*s1*s2);
break;
          default:printf("Please enter the correct Choice");
    }
    return 0;
}