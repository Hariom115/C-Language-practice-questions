#include<stdio.h>
int main()
/*{
    int a[5]={7,2,1,9,11};
    int i,large,small;
    small=a[0];
    large=a[0];

    for(i=0;i<5;i++)
    if(large<a[i])
    large=a[i];
    for(i=0;i<5;i++)
    if(small>a[i])
    small=a[i];
    
    printf("small is :%d\n",small);
    printf("large is :%d\n",large);
    printf("diff btw large and small no is :%d\n",large-small);
    return 0;
}*/

{
    int a[5],i,large,small;
    printf("enter no:");
    fgets(a[i],5,stdin);
    small=a[0];
    large=a[0];

    for(i=0;i<5;i++){
    if(large<a[i]){
    large=a[i];}}
    for(i=0;i<5;i++){
    if(small>a[i]){
    small=a[i];}}
    
    printf("small is :%d\n",small);
    printf("large is :%d\n",large);
    printf("diff btw large and small no is :%d\n",large-small);
    
    
}
