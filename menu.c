#include<stdio.h>
#include<conio.h>

int main()
{
    int x,qt,total,a;
    printf("\t\t\tXYZ SHOP\n");
    printf("MENU\n");
    printf("1.chai----------7\n");
    printf("2.cofe----------15\n");
    printf("3.poha----------10\n");
    printf("4.samosa--------20\n");
    printf("5.kachori-------20\n");
    printf("6.exit\n\n");
    printf("enter your choice");
    scanf("%d",&x);
    switch (x)
    {
    case1:printf("enter quantity of item");
          scanf("%d",&qt);
          a=7;
          total=a*qt;
          printf("your bill is=",total);
          break;
    
    default:
        break;
    }
   
    return 0;
    
}