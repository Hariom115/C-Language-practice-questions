#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)           
      {   
        for(j=1;j<=7;j++)       
          {               
           if(j>=5-i && j<=3+i)
             printf(".  ");
           else
             printf("a  ");    
          }          
          printf("\n");
      }
      printf("\n");
      return 0;
}