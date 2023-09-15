
#include<stdio.h>
int main()
{
     printf("WITHOUT USING TEMP VARIABLE\n");
         int a=100,b=200;
         printf("Before swaping \n a=%d \n b=%d",a,b);
         a=a+b;
         b=a-b;
         a=a-b;
         printf("\nAfter swaping \n a=%d \n b=%d",a,b);
    {
     printf("\nWITH USING TEMP VARIABLE\n");
        int a=1000,b=2000,temp=0;
        printf("Before swaping \n a=%d \n b=%d",a,b);
        temp=a;
        a=b;
        b=temp;
        printf("\nAfter swaping \n a=%d \n b=%d",a,b);
    }
}