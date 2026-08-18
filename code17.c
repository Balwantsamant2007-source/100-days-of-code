#include<stdio.h>
int main()
{
    int percentage;
    printf("enter an integer");
    scanf("%d",&percentage);
    if (percentage>=90&&percentage<=100)
    {printf("grade A");}
    if (percentage>=80&&percentage<=89)
    {printf("grade B");}
    if (percentage>=70&&percentage<=79)
    {printf("grade c");}
    if (percentage>=60&&percentage<=69)
    {printf("grade d");}
    if (percentage<60)
    {printf("grade f");}

}