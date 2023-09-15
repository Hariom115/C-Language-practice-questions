#include<stdio.h>
#include<conio.h>

int main()
 {
    int num=242,x,q,r,d,ans;
    q=num/10;
    r=num%10;
    d=q/10;
    x=q%10;
    ans=r+d+x;
    printf("%d",ans);
 }

