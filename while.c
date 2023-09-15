#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,c;
 while (1)
 {
 
 printf("\tXYZ SHOP\n");
 printf("menu\n");
 printf("1.chai----------10rs\n"); 
 printf("2.cofe----------15rs\n"); 
 printf("3.poha----------20rs\n"); 
 printf("4.samosha-------25rs\n"); 
 printf("5.exit\n\n"); 
 printf("enter ur choice\n");
 scanf("%d",&a);

 switch (a)
 {
 case 1:printf("enter quantity\n");
       scanf("%d",&b);
       c=b*10;
    printf("your bill is=%d",c);
    break;
 case 2:printf("enter quantity\n");
       scanf("%d",&b);
       c=b*15;
    printf("your bill is=%d",c);
    break;
 case 3:printf("enter quantity\n");
       scanf("%d",&b);
       c=b*20;
   printf("your bill is=%d",c);
    break;
 case 4:printf("enter quantity\n");
       scanf("%d",&b);
       c=b*25;
   printf("your bill is=%d",c);
    break;
 case 5:
     exit(0);
 default:
     printf("invalid choice");   
  }
 
 
 printf("\n----thank you----");
 printf("\n-have a nice day-");
 printf("\n--------------------");
 printf("\n\n\n\n\n");
 }
}