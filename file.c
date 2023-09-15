#include<stdio.h>
#include<stdlib.h>
/*main()
{
FILE *fp;
char ch='A';
fp=fopen("abc.txt","w");
if(fp==NULL)
  exit(0);
fputc(ch,fp);
fclose(fp);  
}*/
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("xyz.txt","r");
  while(1)
  {
    ch=fgetc(fp);
    if(ch==EOF)
     break;
    printf("%c",ch); 
  }
  fclose(fp);
}