#include<stdio.h>
int main()
{
    int principal,rate,time;
    printf("enter the integers");
    scanf("%d%d%d",&principal,&rate,&time);
    int simple_interest;
    simple_interest=(principal*rate*time)/100;
    printf("the simple interest is %d",simple_interest);

}