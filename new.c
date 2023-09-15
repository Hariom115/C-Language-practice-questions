#include<stdio.h>
int main()
{
    int x=5;
    if (x++ ==5)
    printf("hey");
    else if (x == 6)
    printf("hello");
    else
    printf("bye");
    return 0;
}