#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
    {printf("enter lowercase alphabet");}
    else  if (ch>='A'&&ch<='Z')
    {printf("enter uppercase alphabet");}
    else if (ch>='0'&&ch<='9')
    {printf("enter digit");}
    else { printf("enter special character");}
}