#include<stdio.h>
int main()
{

    int time;
    printf("enter an integer");
    scanf("%d",&time);
    int hour=time/3600;
    printf("hour=%d",hour);
    int minute=(time%3600)/60;
    printf("minute=%d",minute);
    int second=time%60;
    printf("second=%d",second);
}

