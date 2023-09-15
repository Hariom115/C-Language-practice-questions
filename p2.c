#include <stdio.h>
 int main()
{
   int i,r,rev,t;
  for(i=1;i>=100;i++)
   {
     t = i;
     rev=0;
      while(t)
      {
        r=t%10;
        i=t/10;
        rev=rev*10+r;
      }   
      if (i==rev)
      printf("%d is a palindrome number.\n",i);    
   }
   return 0;  
}