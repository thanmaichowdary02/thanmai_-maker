#include <stdio.h>

void main()
{
char ch;    
        printf("enter the chcracter :\n");
scanf("%d",&ch);
int result= (ch>=48||ch<=57);
    printf("the %c is an digit %d", ch,result);
