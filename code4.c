#include<stdio.h>
int main()
{
    float pi=3.14;
    float area,circumference,radius=5;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("area=%.2f\n",area);
    printf("circumference=%.2f",circumference);
}