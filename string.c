#include<stdio.h>
int main()
/*{
char str[10]="INDORE";
printf("%s",str);
printf("\n");
return 0;
}*/

/*{
char str[30];
printf("enter your name: ");
scanf("%s",str);
printf("%s",str);
printf("\n");
return 0;
}*/

/*{
 char str[20];
 printf("enter your name:");
 gets(str);
 printf("%s",str);
 printf("\n");
}*/

/*{
 char str[20];
 printf("enter your name:");
 fgets(str,30,stdin);
 printf("%s",str);
 printf("\n");
}*/

/*{
    char str[10];
    int i;
    printf("enter your string :");
    gets(str);
    for(i=0;str[i];i++);
    printf("length of string is :%d",i);
    return 0;
}*/

{
    char str[100];
    int i;
    printf("enter your string :");
    fgets(str,100,stdin);
    for(i=0;str[i]=='\0';i++);
    printf("length of string is :%d",i);
    return 0;
}