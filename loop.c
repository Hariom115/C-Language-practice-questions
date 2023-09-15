#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
     c=a-- || ++b;
     printf("a=%d b=%d c=%d",a,b,c);
     
}