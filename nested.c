#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char m,y,a[1],b[1],str[20];
    puts("enter your name :\n");
    gets(str);
    puts("enter u are married or not y=yes/n=no :\n");
    gets(a);
    printf("enter your age :\n");
    scanf("%d",&i);  
    if(y==&a)
       {
        printf("you are eligible");
       }
       
    else
            puts("enter ur gender m=male/f=female:\n");
            gets(b);
            if(m==&b){
                 if(i>=30)
                        printf("you are eligible");  
                 else 
                        printf("you are not eligible");
                    
                   } 
            else
                  if(i>=25)
                         printf("you are eligible");  
                   else 
                        printf("you are not eligible");
}                  
           
   