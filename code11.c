#include<stdio.h>
int main()
{
    int a;
    printf("enter an integer");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}