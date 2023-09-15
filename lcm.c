#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(l=a>b?a:b;l<=a*b;l++)
       if (l%a==0&&l%b==0)
       break;
    printf("lcm is =%d",l);
    printf("\n");
    return 0;   
       
}